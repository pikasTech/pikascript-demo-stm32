/* Warning!!! Don't modify this file!!! */
#include "TinyObj.h"
#include "MemoryChecker.h"
#include <stdio.h>
#include "BaseObj.h"

void MemoryChecker_sizeMethod(MimiObj *self, Args *args){
    MemoryChecker_size(self);
}

void MemoryChecker_maxMethod(MimiObj *self, Args *args){
    MemoryChecker_max(self);
}

void MemoryChecker_nowMethod(MimiObj *self, Args *args){
    MemoryChecker_now(self);
}

MimiObj *New_MemoryChecker(Args *args){
    MimiObj *self = New_TinyObj(args);
    class_defineMethod(self, "size()", MemoryChecker_sizeMethod);
    class_defineMethod(self, "max()", MemoryChecker_maxMethod);
    class_defineMethod(self, "now()", MemoryChecker_nowMethod);
    return self;
}
