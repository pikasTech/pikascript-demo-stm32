/* ******************************** */
/* Warning! Don't modify this file! */
/* ******************************** */
#ifndef __LED__H
#define __LED__H
#include <stdio.h>
#include <stdlib.h>
#include "MimiObj.h"

MimiObj *New_LED(Args *args);

void LED_off(MimiObj *self);
void LED_on(MimiObj *self);

#endif
