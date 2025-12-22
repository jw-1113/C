// leddata를 좌측으로 1칸씩 보내면서 키고 그 후엔 우측으로 보내기
#include "../ap/ap3/ap3.h"
#include "./driver/led.h"


void ap3Init() {
    ledInit();
   }

void ap3Main() {
   uint8_t ledData = 0x01;

     while (1) {
        for(uint8_t i =0; i<7; i++){
            // 함수를 호출하면서 leddata의 주소값을 주소연산자(&)를 이용하여 넘겨줌
            ledLeftShift(&ledData);
            _delay_ms(300);
        }

        for(uint8_t i =0; i<7; i++){
            ledRightShift(&ledData);
            _delay_ms(300);
        }
    }
   }