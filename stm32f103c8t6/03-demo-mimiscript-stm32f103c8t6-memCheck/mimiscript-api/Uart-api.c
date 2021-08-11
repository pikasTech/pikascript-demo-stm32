/* Warning!!! Don't modify this file!!! */
#include "TinyObj.h"
#include "Uart.h"
#include <stdio.h>
#include "BaseObj.h"

void Uart_printNameMethod(MimiObj *self, Args *args){
    Uart_printName(self);
}

void Uart_setNameMethod(MimiObj *self, Args *args){
    char * name = args_getStr(args, "name");
    Uart_setName(self, name);
}

void Uart_sendMethod(MimiObj *self, Args *args){
    char * data = args_getStr(args, "data");
    Uart_send(self, data);
}

MimiObj *New_Uart(Args *args){
    MimiObj *self = New_TinyObj(args);
    class_defineMethod(self, "printName()", Uart_printNameMethod);
    class_defineMethod(self, "setName(name:str)", Uart_setNameMethod);
    class_defineMethod(self, "send(data:str)", Uart_sendMethod);
    return self;
}
