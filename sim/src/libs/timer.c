#include <am.h>

#define RTC_ADDR 0xb0000000
#define PERIOD 20  //ns
                   
void __am_timer_init(){

}
                   

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
    uptime->us = 0;
    uint64_t us = *(volatile uint64_t *)(RTC_ADDR);
    uptime->us = us / 50 ;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
