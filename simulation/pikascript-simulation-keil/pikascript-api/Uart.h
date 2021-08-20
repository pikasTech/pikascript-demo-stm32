/* ******************************** */
/* Warning! Don't modify this file! */
/* ******************************** */
#ifndef __Uart__H
#define __Uart__H
#include <stdio.h>
#include <stdlib.h>
#include "MimiObj.h"

MimiObj *New_Uart(Args *args);

void Uart_printName(MimiObj *self);
void Uart_send(MimiObj *self, char * data);
void Uart_setName(MimiObj *self, char * name);

#endif
