#ifndef _DELAY_H
#define _DELAY_H

#include <stdint.h>

/*
  Delay by the provided number of system ticks.
  Any values between 0 and 0x0ffffffff are allowed.
*/
// void delay_system_ticks(uint32_t sys_ticks);

/*
  Delay by the provided number of micro seconds.
  Limitation: "us" * System-Freq in MHz must now overflow in 32 bit.
  Values between 0 and 1.000.000 (1 second) are ok.
  
  Important: Call SystemCoreClockUpdate() before calling this function.
*/
void delay_micro_seconds(uint32_t us);

#endif /* _DELAY_H */