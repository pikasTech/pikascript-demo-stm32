/* Warning!!! Don't modify this file!!! */
#include "SysObj.h"
#include "MyRoot.h"
#include <stdio.h>
#include "BaseObj.h"
#include "Uart.h"
#include "MemoryChecker.h"
#include "LED.h"

void MyRoot_rebootMethod(MimiObj *self, Args *args){
    MyRoot_reboot(self);
}

MimiObj *New_MyRoot(Args *args){
    MimiObj *self = New_SysObj(args);
    obj_import(self, "Uart", New_Uart);
    obj_import(self, "MemoryChecker", New_MemoryChecker);
    obj_import(self, "LED", New_LED);
    class_defineMethod(self, "reboot()", MyRoot_rebootMethod);
    return self;
}
