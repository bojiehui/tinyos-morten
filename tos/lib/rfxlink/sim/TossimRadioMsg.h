#ifndef TOSSIM_RADIO_MSG_H
#define TOSSIM_RADIO_MSG_H

#include "AM.h"

#include <LowPowerListeningLayer.h>
#include <PacketLinkLayer.h>

typedef nx_struct tossim_header {
  nx_uint8_t dsn;
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} tossim_header_t;

typedef nx_struct tossim_footer {
  nxle_uint16_t crc;  
} tossim_footer_t;

typedef struct tossim_metadata {
  nx_int8_t strength;
  nx_uint8_t ack;
  nx_uint16_t time;
  nx_uint8_t radio;
  // rfxlink metadata shall be put at the end in the order they appear
  // in the radio stack
#ifdef LOW_POWER_LISTENING
	lpl_metadata_t lpl;
#endif
#ifdef PACKET_LINK
	link_metadata_t link;
#endif
} tossim_metadata_t;

#endif
