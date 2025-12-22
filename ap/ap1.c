// Button 코드
// 1번버튼 눌렀다 뗄떼 켜지고
// 2번버튼 눌렀다 뗄떼 꺼짐
// 3번버튼 꺼져있으면 켜지고 켜졌으면 꺼지고
#include "../ap/ap1/ap1.h"
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