#include "TimerOne.h"

/**
 * Function to initialize a timer
 */
void Timer1Initialize();

/**
 * Function to set a period and a function interrupt to the timer
 */
void Timer1setPeriod(void (*isr)(), unsigned long microseconds);

/**
 * funtcion to stop the timer and detach the interrupt
 */
void stopTimer();

/**
 *Function to restart a timer
 */
void restartTime(unsigned long time, void (*f)());