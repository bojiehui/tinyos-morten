#ifndef __RADIOCONFIG_H__
#define __RADIOCONFIG_H__

#ifndef TASKLET_IS_TASK
#define TASKLET_IS_TASK
#endif

#include <Timer.h>

typedef TMicro TRadio;
typedef uint16_t tradio_size;

#define RADIO_ALARM_MICROSEC (1024ULL*1024ULL) / (1000ULL*1000ULL)

#define RADIO_ALARM_MILLI_EXP 10

#if !defined(TFRAMES_ENABLED) && !defined(PACKET_LINK)
//#define PACKET_LINK
#endif

#endif
