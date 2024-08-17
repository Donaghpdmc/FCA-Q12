#include "mbed.h" 
#include "LSM6DSLSensor.h"             
 
PwmOut Led1(LED1);
PwmOut Led2(LED2);
PwmOut Led3(LED3);
 
float brightness = 0.0;
 
int main() {
    while(1) {
       char c = pc.getc();
       if ((c == 'u') && (brightness < 0.5)) {
            brightness += 0.1;
            led = brightness;
       }
       if ((c == 'd') && (brightness > 0.0)) {
            brightness -= 0.1;
            led = brightness;
       }
       if ((c != 'd') && (c != 'u')){
            pc.printf("Type 'u' or 'd' \n");
       }     
    }
}