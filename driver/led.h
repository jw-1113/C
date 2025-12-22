// include 와 함수의 원형을 분리
// - define 함수의 원형 선언으로 구성되어 있고
// - 함수에서 


#include "common/def.h"

#define LED_DDR DDRD
#define LED_PORT PORTD

typedef struct
{
    volatile uint8_t    *port;
    volatile uint8_t    *ddr;
    uint8_t             pinNumber;
}LED;


void ledInint(LED *led);
void ledOn(LED *led);
void ledOff(LED *led);

// ledmove를 위한 함수
void ledInit();
void GPIO_Output(uint8_t data);
void ledLeftShift(uint8_t *data);
void ledRightShift(uint8_t *data);