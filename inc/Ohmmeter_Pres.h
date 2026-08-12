
#ifndef OHMMETER_Pres_H_
#define OHMMETER_Pres_H_

/*==================[inclusions]=============================================*/

#include <stdint.h>
#include "gpio.h"

/*==================[macros]=================================================*/

// Calibration constants (injected from module)
#define OHM_Pres_VIN    ((float)3.0666)
#define OHM_Pres_R1     ((float)220)
#define OHM_Pres_ADJ    ((float)0.01)
#define OHM_Pres_ADC_RES  ((float)1023.0)

/*==================[init/poll]==============================================*/

void Ohmmeter_Pres_init(void);

void Ohmmeter_Pres_poll(void);

/*==================[functions]=============================================*/

float Ohmmeter_Pres_getResistance(void);

void Ohmmeter_Pres_getFormattedValue(char* buffer);

/*==================[end of file]============================================*/
#endif

