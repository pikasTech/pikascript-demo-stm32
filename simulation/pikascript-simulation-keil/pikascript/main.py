from PikaObj import *
import PikaStdLib

class LED(TinyObj):
    def on():
        pass
    def off():
        pass

class Uart(TinyObj):
    def send(data:str):
        pass
    def setName(name:str):
        pass
    def printName():
        pass

class PikaMain(PikaStdLib.SysObj):
    led = LED()
    uart = Uart()
