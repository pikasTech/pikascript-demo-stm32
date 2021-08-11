/* Warning!!! Don't modify this file!!! */
#include "TinyObj.h"
#include "LED.h"
#include <stdio.h>
#include "BaseObj.h"

void LED_offMethod(MimiObj *self, Args *args){
    LED_off(self);
}

void LED_onMethod(MimiObj *self, Args *args){
    LED_on(self);
}

MimiObj *New_LED(Args *args){
    MimiObj *self = New_TinyObj(args);
    class_defineMethod(self, "off()", LED_offMethod);
    class_defineMethod(self, "on()", LED_onMethod);
    return self;
}
