// 1부터 숫자올리기
#include "ap/ap5/ap5.h"
#include "./driver/fnd.h"

void ap5Init(){

}
void ap5Main(){
        DDRA = 0xff; // FND_DATA_DDR
        DDRB = 0xff; // FMD_SELECT_DDR
        PORTB = 0xff;

        uint16_t count = 0;
        uint32_t timeTick = 0;
        uint32_t prevTime = 0;

    while (1) {
        fndDisplay(count);
        if(timeTick - prevTime > 100){
            prevTime = timeTick;
            count ++;
        }
        _delay_ms(1);
        timeTick++;
    }

}