// 버튼 코드
#include "ap1.h"
#include "../driver/button.h"

    BUTTON btnOn;
    BUTTON btnOff;
    BUTTON btnToggle;

void ap1Init()  // 초기값 설정
{
    buttonInit(&btnOn, &BUTTON_DDR, &BUTTON_PIN, BUTTON_ON);
    buttonInit(&btnOff, &BUTTON_DDR, &BUTTON_PIN, BUTTON_OFF);
    buttonInit(&btnToggle, &BUTTON_DDR, &BUTTON_PIN, BUTTON_TOGGLE);
}

void ap1Main()
{
    LED_DDR = 0xff;

     while (1) {
        if(buttonGetState(&btnOn) == ACT_RELEASE) {
            LED_PORT = 0xff;
        }
        if (buttonGetState(&btnOff) == ACT_RELEASE) {
            LED_PORT = 0x00;       
        }
        if (buttonGetState(&btnToggle) == ACT_RELEASE) {
            LED_PORT ^= 0xff;
        }
    
    }

}