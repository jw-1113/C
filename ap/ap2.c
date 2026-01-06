// Button 코드
// 1번버튼 누르면 0 2 4 8 or 1 3 4 7 반복
// 2번버튼 누르면 전부켜지고 꺼지고 반복
// 3번버튼 누르면 끄기
#include "../ap/ap2/ap2.h"
#include "../driver/button.h"
BUTTON btn1;
BUTTON btn2;
BUTTON btn3;

void ap2Init()  // 초기값 설정
{

    buttonInit(&btn1, &BUTTON_DDR, &BUTTON_PIN, BUTTON_ON);
    buttonInit(&btn2, &BUTTON_DDR, &BUTTON_PIN, BUTTON_OFF);
    buttonInit(&btn3, &BUTTON_DDR, &BUTTON_PIN, BUTTON_TOGGLE);
}

void ap2Main()
{
    LED_DDR = 0xff;

     while (1) {
        if(buttonGetState(&btn1) == ACT_RELEASE) {
            // LED_PORT = 0xaa;
            // _delay_ms(500);
            // LED_PORT = 0x55;
            // _delay_ms(500);
            for(uint8_t i=0; i<8; i++){
                PORTD |= (1<<i);
                _delay_ms(300);
            }
            for(uint8_t j=7; j>=0; j--){
                PORTD &= ~(1<<j);
                _delay_ms(200);
            }
        }
        if (buttonGetState(&btn2) == ACT_RELEASE) {
            LED_PORT = 0x00;
            _delay_ms(500);
            LED_PORT = 0xff;
            _delay_ms(500);       
        }
        if (buttonGetState(&btn3) == ACT_RELEASE) {
            LED_PORT ^= 0xff;
        }
    
    }

}