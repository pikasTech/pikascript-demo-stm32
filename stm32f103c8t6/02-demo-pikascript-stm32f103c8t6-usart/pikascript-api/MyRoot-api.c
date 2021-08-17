/* ******************************** */
/* Warning! Don't modify this file! */
/* ******************************** */
#include "MyRoot.h"
#include "BaseObj.h"
#include "LED.h"
#include "Uart.h"
#include <stdio.h>
#include <stdlib.h>
#include "BaseObj.h"

MimiObj *New_MyRoot(Args *args){
    MimiObj *self = New_BaseObj(args);
    obj_import(self, "LED", New_LED);
    obj_newObj(self, "led", "LED");
    obj_import(self, "Uart", New_Uart);
    obj_newObj(self, "uart", "Uart");
    return self;
}
