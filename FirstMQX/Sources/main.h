#ifndef __main_h_
#define __main_h_

#define INIT_TASK 5
#define LED1_TASK 6
#define LED2_TASK 7
#define LED3_TASK 8
#define LED4_TASK 9
#define RTC_TASK 10

extern void init_task(uint_32);
extern void led1_task(uint_32);
extern void led2_task(uint_32);
extern void led3_task(uint_32);
extern void led4_task(uint_32);
extern void rtc_task(uint_32);

#endif /* __main_h_ */

