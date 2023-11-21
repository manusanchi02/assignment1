#include <TimerOne.h>

void Timer1Initialize()
{
    noInterrupts();
    Timer1.initialize();
    Timer1.stop();
    interrupts();
}

void Timer1setPeriod(void (*isr)(), unsigned long microseconds)
{
    noInterrupts();
    Timer1.start();
    Timer1.attachInterrupt(isr, microseconds);
    interrupts();
}

void stopTimer()
{
    Timer1.stop();
    Timer1.detachInterrupt();
}

void restartTime(unsigned long time, void (*isr)())
{
    stopTimer();
    Timer1setPeriod(isr, time);
}