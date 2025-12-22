#include "led.h"


// LED 초기화 함수 구현
void ledInint(LED *led){
    //*(led->port - 1) = *(led->port -1) | (1 << led->pinNumber);
                        //  ㄴDDR           ㄴ 1만큼 led 민다
    // DDR레지스터는 PORT레지스터보다 주소가 1낮게 위치하므로
    // (led->port - 1)를 이용해서 PORT에서 DDR로 접근
    // (1 << led->pinNumber)와 OR연산을 통해서 지정된 포트를 출력

    *(led->ddr) |= (1 << led->pinNumber);
}


// LED On 함수
void ledOn(LED *led){
    *(led->port) |= (1 << led-> pinNumber);
}

// LED Off 함수
void ledOff(LED *led){
    *(led->port) &= ~(1 << led->pinNumber);
}

// LED포트를 출력모드로 사용하기위해 초기설정을 하는 함수 정의
void ledInit(){   // 포트설정만 하면 되기 때문에 인자값이 없이 함수 정의
    DDRD = 0xff;    // 출력으로 설정하기 위해 1111 1111 대입
}

// LED포트(PORTD)에 데이터를 출력하기 위해 함수를 정의
void GPIO_Output(uint8_t data){
    PORTD = data;   // 인자값을 넘겨준 data를 PORTD에 대입
}

// LED 데이터를 좌측으로 이동시키는 함수 정의
void ledLeftShift(uint8_t *data){
    // 역참조(*)를 사용하여 포인터 data가 가르키는 곳의 값을 사용
    *data = (*data >> 7) | (*data << 1); // 좌측으로 1비트 이동
    GPIO_Output(*data); // 포인터가 가르키는 data의 값을 넘겨줌
}

// LED 데이터를 우측으로 이동시키는 함수 정의
void ledRightShift(uint8_t *data){
    *data = (*data << 7) | (*data >> 1);
    GPIO_Output(*data); 
}