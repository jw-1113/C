// Button 코드
// 1번버튼 누르면 0 2 4 8 or 1 3 4 7 반복
// 2번버튼 누르면 전부켜지고 꺼지고 반복
// 3번버튼 누르면 끄기
#include "../driver/button.h"
#include "ap2.h"

    BUTTON btnOn1;
    BUTTON btnOff1;
    BUTTON btnToggle1;

void ap2Init()  // 초기값 설정
{
    buttonInit(&btnOn1, &BUTTON_DDR, &BUTTON_PIN, BUTTON_ON);
    buttonInit(&btnOff1, &BUTTON_DDR, &BUTTON_PIN, BUTTON_OFF);
    buttonInit(&btnToggle1, &BUTTON_DDR, &BUTTON_PIN, BUTTON_TOGGLE);
}

void ap2Main()
{
    LED_DDR = 0xff;

     while (1) {
        if(buttonGetState(&btnOn1) == ACT_RELEASE) {
            LED_PORT = 0xaa;
            _delay_ms(500);
            LED_PORT = 0x55;
            _delay_ms(500);
        }
        if (buttonGetState(&btnOff1) == ACT_RELEASE) {
            LED_PORT = 0x00;
            _delay_ms(500);
            LED_PORT = 0xff;
            _delay_ms(500);       
        }
        if (buttonGetState(&btnToggle1) == ACT_RELEASE) {
            LED_PORT ^= 0xff;
        }
    
    }

}