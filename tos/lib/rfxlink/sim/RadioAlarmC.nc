/*
 * Copyright (c) 2010 Aarhus University
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of Aarhus University nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL AARHUS
 * UNIVERSITY OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @author Morten Tranberg Hansen
 * @date   November 20 2010
 */

module RadioAlarmC {

  provides {
    interface RadioAlarm[uint8_t id];
    interface LocalTime<TRadio>;
  }

} implementation {

  enum {
    NO_CLIENT = 0xFF,
    TICKS_PER_SECOND = 1048576ULL, 
  }; 

  uint8_t client = NO_CLIENT;
  sim_event_t* currentEvent = NULL;;

  sim_time_t clock_to_sim(sim_time_t t) {
    t *= sim_ticks_per_sec();
    t /= TICKS_PER_SECOND;
    return t;
  }

  sim_time_t sim_to_clock(sim_time_t t) {
    t *= TICKS_PER_SECOND;
    t /= sim_ticks_per_sec();
    return t;
  }

  /***************** RadioAlarm ****************/

  tasklet_async command bool RadioAlarm.isFree[uint8_t id]() {
    return client == NO_CLIENT;
  }

  void alarm_fired(sim_event_t* evt) {
    if(!evt->cancelled) {
      uint8_t temp = client;
      dbg("RadioAlarm.debug", "RadioAlarm: fired for client %hhu\n", client);
      client = NO_CLIENT;
      signal RadioAlarm.fired[temp]();
    } else {
      dbg("RadioAlarm.debug", "RadioAlarm: event cancelled\n");
    }
  }

  tasklet_async command void RadioAlarm.wait[uint8_t id](uint16_t timeout) {

    if(client != NO_CLIENT) { 

      dbgerror("RadioAlarm.error", "RadioAlarm: already being used by client %hhu\n", client);

    } else {

      sim_event_t* alarmEvent = sim_queue_allocate_event();

      alarmEvent->time = sim_time() + clock_to_sim(timeout);
      alarmEvent->force = FALSE;
      alarmEvent->cancelled = FALSE;
      alarmEvent->handle = alarm_fired;
      alarmEvent->cleanup = sim_queue_cleanup_none;

      client = id;
      currentEvent = alarmEvent;

      dbg("RadioAlarm.debug", "RadioAlarm: scheduling event with timeout %hu for client %hhu\n", timeout, client);
      
      sim_queue_insert(alarmEvent);

    }

  }
  
  tasklet_async command void RadioAlarm.cancel[uint8_t id]() {

    if(id==client) {
      dbg("RadioAlarm.debug", "RadioAlarm: cancelling alarm for client %hhu\n", id);
      currentEvent->cancelled = TRUE;
      client = NO_CLIENT;
    } else {
      dbgerror("RadioAlarm.error", "RadioAlarm: cannot cancel alarm for client %hhu\n", id);
    }

  }
  
  async command uint16_t RadioAlarm.getNow[uint8_t id]() {
    uint16_t now;    
    sim_time_t elapsed = sim_time()-sim_mote_start_time(sim_node());
    elapsed = sim_to_clock(elapsed);
    now = (uint16_t)(elapsed & 0xFFFF);
    dbg("RadioAlarm.trace", "RadioAlarm: now is  %hu\n", now);
    return now;
  }


  /***************** LocalTime ****************/  

  async command uint32_t LocalTime.get() {
    uint32_t lt;
    sim_time_t elapsed = sim_time()-sim_mote_start_time(sim_node());
    elapsed = sim_to_clock(elapsed);
    lt = (uint32_t)(elapsed & 0xFFFFFFFF);
    dbg("RadioAlarm.trace", "RadioAlarm: localtime is %lu\n", lt);
    return lt;
  }


  /***************** Defaults ****************/  

  default tasklet_async event void RadioAlarm.fired[uint8_t id]() {}

}
