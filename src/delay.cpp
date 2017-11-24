#include "mbed.h"
#include "delay.h"

// void delay_system_ticks(uint32_t sys_ticks)
// {

// }

void delay_micro_seconds(uint32_t us)
{
  wait_us(us);
}