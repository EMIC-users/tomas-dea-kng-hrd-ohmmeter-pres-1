#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "inc/userFncFile.h"
#include "inc/systemTimer.h"
#include "inc/led_Led1.h"
#include "inc/led_Led2.h"
#include "inc/timer_api1.h"
#include "inc/Ohmmeter_Pres.h"
#include "inc/conversionFunctions.h"
#include "inc/EMICBus.h"

/* User Arrays */
char txt[16] = "0";

void onReset()
{
    LEDs_Led1_blink(100, 400, 8);
    setTime1(2000, 'A');
}


void etOut1()
{
    LEDs_Led2_blink(60, 240, 1);
    Ohmmeter_Pres_getFormattedValue(txt);
    pI2C("PRES\t%.2f", Ohmmeter_Pres_getResistance());
    pI2C("FMTPRES\t$s", txt);
}


/* Debuggear esta mierda */


