// LED를 구조체로 구현
#include "src/ap/ap.h"
#include <avr/io.h>

int main()
{
//    apInit();
DDRG = 0x00;    // G포트 입력으로 설정
DDRD = 0xff;    // D포트 출력으로 설정

    while (1)
    {
//        apMain();
        if(PING & (1<<0)){  // PORTG의 0번핀이 High라면
            PORTD = 0x00;   // LED OFF
        }
        else{               // PORTG의 0번핀이 Low라면
            PORTD = 0xff;
        }
    }

} // PING0 과 연결되어 있는 스위치를 누르면 켜진다 입력이없으니까 꺼져있다

