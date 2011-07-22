 /*
 * Copyright (c) 2008-2010 The Regents of the University  of California.
 * All rights reserved."
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the copyright holders nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include <IPDispatch.h>
#include <lib6lowpan/lib6lowpan.h>
#include <lib6lowpan/ip.h>
#include <lib6lowpan/ip.h>
#include "TestMessage.h"
#include "UDPReport.h"
#include "PrintfUART.h"

#define REPORT_PERIOD 10L

module UDPEchoP {
  uses {
    interface Boot;
    interface SplitControl as RadioControl;

#ifdef TOSSIM
#ifdef RPL_ROUTING
    interface RootControl;
#endif
#endif

   // interface UDP as Echo;
    interface UDP as UDPSend;
    interface UDP as UDPReceive;

    interface Leds;
    
    interface Timer<TMilli> as StatusTimer;
   
    interface BlipStatistics<ip_statistics_t> as IPStats;
    interface BlipStatistics<udp_statistics_t> as UDPStats;

    interface Random;
  }

} implementation {

  bool timerStarted;
  nx_struct udp_report stats;
  struct sockaddr_in6 route_dest;
  radio_count_msg_t payload;
  uint16_t sequence_nr = 0;

  event void Boot.booted() {
    memclr((uint8_t *)&payload, sizeof(payload));
    call RadioControl.start();
    timerStarted = FALSE;

    call IPStats.clear();
    printfUART_init();

#ifdef TOSSIM
#ifdef RPL_ROUTING
    /* Basestation Mote will be grounded */
    if (TOS_NODE_ID == BASESTATION_ID) {
      //dbg ("UDPEchoP", "Basestation ID = %d. is grounded\n", TOS_NODE_ID);
      call RootControl.setRoot();
      call UDPReceive.bind(BASESTATION_PORT);
    }
#endif
#endif

#ifdef DEST_IP
    if (TOS_NODE_ID == ECHO_SOURCE_ID) { 
      route_dest.sin6_port = htons(ECHO_DEST_PORT);
      inet_pton6(DEST_IP, &route_dest.sin6_addr);
      dbg ("UDPEchoP", "Bind in TOS_ID = %i to Port = %i\n", TOS_NODE_ID, ECHO_SOURCE_PORT);
      call UDPReceive.bind(ECHO_SOURCE_PORT);
      call StatusTimer.startOneShot(WAITTIME);
	  
}

    if (TOS_NODE_ID == ECHO_DEST_ID) {
      dbg ("UDPEchoP", "Bind in TOS_ID = %i to Port = %i\n", TOS_NODE_ID, ECHO_DEST_PORT);
      route_dest.sin6_port = htons(ECHO_DEST_PORT);
      call UDPReceive.bind(ECHO_DEST_PORT);
      call StatusTimer.startOneShot(WAITTIME);
    }
#endif

    //dbg("Boot", "booted: %i\n", TOS_NODE_ID);
    }

  event void RadioControl.startDone(error_t e) {
  }

  event void RadioControl.stopDone(error_t e) {
  }

  event void StatusTimer.fired() {
    
    if (!timerStarted) {
      call StatusTimer.startPeriodic(1024 * REPORT_PERIOD);
      timerStarted = TRUE;
    }
    
    if (TOS_NODE_ID == ECHO_SOURCE_ID) {
      if (stats.seqno == 50){
	printf ("Ping: Pinged 50 times\n");
	dbg ("Ping","Pinged 50 times\n");     
      }
      else {
	stats.seqno++;
        stats.sender = TOS_NODE_ID;
        payload.counter = sequence_nr++;
        payload.ist = WAITTIME;
        payload.senderID = ECHO_SOURCE_ID;
        payload.receiverID = ECHO_DEST_ID;
        payload.data[0]= 0xFF;
        payload.data[DATA_SIZE-1]= 0xFF;
        call Leds.led1Toggle();
        dbg ("Ping", "Ping: Seqence No.= %i\n",payload.counter);
        dbg ("Ping", "Send: Node %i is sending UDP Message to Node = %X:%X:%X on Port = %i\n",TOS_NODE_ID, ntohs(route_dest.sin6_addr.s6_addr16[0]), ntohs(route_dest.sin6_addr.s6_addr16[3]), ntohs(route_dest.sin6_addr.s6_addr16[7]), ntohs(route_dest.sin6_port));
        dbg ("Ping", "Send at %s \n", sim_time_string());
        //dbg ("Ping", "Ping: Request: Node %i calls Node %i %s \n",ECHO_SOURCE_ID, ECHO_DEST_ID, sim_time_string());
        call UDPSend.sendto(&route_dest, &payload, sizeof(payload));}
    }
  }

 event void UDPReceive.recvfrom(struct sockaddr_in6 *from, void *data, 
                                 uint16_t len, struct ip6_metadata *meta) {
    //Binded to the listen port
    static char print_buf3[128];

    inet_ntop6(&from->sin6_addr, print_buf3, 128);
    dbg ("Ping", "Receive: Received Data from address = %s Port = %i\n", print_buf3, ntohs(from->sin6_port));
    dbg ("Ping", "Ping: Receive: Received Data: %i \n", data);
    //dbg ("Ping", "ReceiveTime: %s \n", sim_time_string());
    dbg ("Ping", "Send: Sending response to address = %s Port = %i\n", print_buf3, ntohs(from->sin6_port));
    dbg ("Ping", "SendTime: %s \n", sim_time_string());
    call UDPReceive.sendto(from, data, len);
  }

  event void UDPSend.recvfrom(struct sockaddr_in6 *from, void *data, 
                              uint16_t len, struct ip6_metadata *meta) {
    radio_count_msg_t * message_rec = (radio_count_msg_t *) data;
    static char print_buf3[128];

    inet_ntop6(&from->sin6_addr, print_buf3, 128);
    printf ("#### %d\n",payload.counter);
    dbg ("Ping", "Receive: Got response from address = %s Port = %i\n", print_buf3, ntohs(from->sin6_port));
    dbg ("Ping", "Receive at %s \n", sim_time_string());
    //dbg ("Ping", "Response: Node %i answered Node %i %s \n",ECHO_DEST_ID, ECHO_SOURCE_ID , sim_time_string());
    /* dbg_clear("LogFile", "%i, %s, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i \n",TOS_NODE_ID, sim_time_string(), message_rec->counter, message_rec->ist, message_rec->rssi, message_rec->lqi, message_rec->power, message_rec->distance, message_rec->senderID, message_rec->receiverID, message_rec->voltage_sender, message_rec->voltage_receiver, message_rec->crc_ok, message_rec->data[0], message_rec->data[DATA_SIZE-1]); */
  }

  }

 
