/* ******************************** */
/* Warning! Don't modify this file! */
/* ******************************** */
#include "PikaMain.h"
#include "PikaStdLib_SysObj.h"
#include "LED.h"
#include "Uart.h"
#include <stdio.h>
#include <stdlib.h>
#include "BaseObj.h"

PikaObj *New_PikaMain(Args *args){
    PikaObj *self = New_PikaStdLib_SysObj(args);
    obj_import(self, "LED", New_LED);
    obj_newObj(self, "led", "LED");
    obj_import(self, "Uart", New_Uart);
    obj_newObj(self, "uart", "Uart");
    return self;
}
