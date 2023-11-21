#include "utils.h"
#include "Arduino.h"
#define N_LED 4

void randomizeOrder(int turnedOffOrder[])
{
    randomSeed(analogRead(4));
    int i = 1;
    while (i <= N_LED)
    {
        int choise = random(0, N_LED);
        if (turnedOffOrder[choise] == 0)
        {
            turnedOffOrder[choise] = i;
            i++;
        }
    }
}

void flushArray(int *array)
{
    array[0] = 0;
    array[1] = 0;
    array[2] = 0;
    array[3] = 0;
}

