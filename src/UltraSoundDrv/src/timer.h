#ifndef __TIMER_H__
#define __TIMER_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "UltraSoundDrv.h"

typedef enum {
    TIMER_ERROR_NO_ERRORS = 0x00
} TIMER_ERROR;

TIMER_ERROR TIMER_GetError(void);
void TIMER_Init(uint32_t trigger_freq);
void TIMER_Delay_us(uint32_t delay_value);
void TIMER_ADCtrigger_Enable(void);


#ifdef __cplusplus
}
#endif

#endif // __TIMER_H__