
#include "../ap/ap4/ap4.h"
#include "driver/fnd.h"
BUTTON btnCount;
BUTTON btnStop;
BUTTON btnReset;

void ap4Init(){

    buttonInit(&btnCount, &BUTTON_DDR, &BUTTON_PIN, BUTTON_ON);
    buttonInit(&btnStop, &BUTTON_DDR, &BUTTON_PIN, BUTTON_OFF);
    buttonInit(&btnReset, &BUTTON_DDR, &BUTTON_PIN, BUTTON_TOGGLE);
    
}

void ap4Main() {

    DDRF = 0xff;
    PORTF = FND_Number[0];

    while (1) {
       if(buttonGetState(&btnCount) == ACT_RELEASE) {
            for(int i = 1; i<=10; i++){ 
                PORTF = FND_Number[i-1];
                _delay_ms(300);
                if (buttonGetState(&btnStop) == ACT_RELEASE) {
                    break;
                 }
                else if(i==9){
                    i = 0;
               }
                }
            }
        if (buttonGetState(&btnReset) == ACT_RELEASE) {
            PORTF = 0x3f;
        }
    }
    
}

