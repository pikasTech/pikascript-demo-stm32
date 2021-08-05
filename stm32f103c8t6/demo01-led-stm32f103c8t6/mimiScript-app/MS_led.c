#include "main.h"
#include "baseObj.h"

static void onFun(MimiObj *self, Args *args)
{
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
}

static void offFun(MimiObj *self, Args *args)
{
		HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);
}

MimiObj *New_LED1(Args *args)
{
	/*	Derive from the tiny object class.
		Tiny object can not import sub object.	
		Tiny object is the smallest object. */	
		MimiObj	 *self  = New_TinyObj(args);
		class_defineMethod(self, "on()", onFun);
		class_defineMethod(self, "off()", offFun);
		return self;
}