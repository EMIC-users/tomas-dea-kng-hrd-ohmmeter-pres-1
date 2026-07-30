#include <xc.h>
#include "inc/systemConfig.h"

#include "inc/systemTimer.h"
#include "inc/led_Led1.h"
#include "inc/led_Led2.h"
#include "inc/timer_api1.h"
#include "inc/Ohmmeter_Pres.h"
#include "inc/conversionFunctions.h"
#include "inc/EMICBus.h"
#include "inc/system.h"
#include "inc/userFncFile.h"

#include "system.c"

int main(void)
{
	initSystem();
	systemTimeInit();
	LEDs_Led1_init();
	LEDs_Led2_init();
	Ohmmeter_Pres_init();
	EMICBus_init();
	onReset();
	do
	{
		LEDs_Led1_poll();
		LEDs_Led2_poll();
		timer1_Poll();
		Ohmmeter_Pres_poll();
		poll_EMICBus();
	}
	while(1);
}

