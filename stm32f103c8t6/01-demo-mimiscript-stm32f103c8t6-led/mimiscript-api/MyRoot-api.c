/* Warning!!! Don't modify this file!!! */
#include "BaseObj.h"
#include "MyRoot.h"
#include <stdio.h>
#include "BaseObj.h"
#include "LED.h"

MimiObj *New_MyRoot(Args *args){
    MimiObj *self = New_BaseObj(args);
    obj_import(self, "LED", New_LED);
    obj_newObj(self, "led", "LED");
    return self;
}
