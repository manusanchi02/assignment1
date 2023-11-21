#include "powerManager.h"

void sleep()
{
    Serial.println("Going to power down");
    set_sleep_mode(SLEEP_MODE_PWR_DOWN);
    sleep_enable();
    power_adc_disable();
    power_spi_disable();
    power_timer0_disable(); // only timer 1 to
    power_timer2_disable(); // not reinitialize it
    power_twi_disable();
    sleep_mode();
    // in this point arduino wake up
    sleep_disable();
    power_all_enable();
}

void wakeUp()
{
    Serial.println("Waking up");
}
