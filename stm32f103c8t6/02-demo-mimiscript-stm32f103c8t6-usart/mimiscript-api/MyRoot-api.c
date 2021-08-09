/* Warning!!! Don't modify this file!!! */
#include "BaseObj.h"
#include "MyRoot.h"
#include <stdio.h>
#include "BaseObj.h"
#include "Uart.h"
#include "LED.h"

void MyRoot_rebootMethod(MimiObj *self, Args *args){
    MyRoot_reboot(self);
}

MimiObj *New_MyRoot(Args *args){
    MimiObj *self = New_BaseObj(args);
    obj_import(self, "Uart", New_Uart);
    obj_newObj(self, "uart", "Uart");
    obj_import(self, "LED", New_LED);
    obj_newObj(self, "led", "LED");
    class_defineMethod(self, "reboot()", MyRoot_rebootMethod);
    return self;
}
