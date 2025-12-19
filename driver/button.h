#include "def.h"

#define LED_DDR    DDRD
#define LED_PORT   PORTD   // 출력을 할때 PORT
#define BUTTON_DDR DDRG
#define BUTTON_PIN PING    // 입력을 받을때 PIN
#define BUTTON_ON       0
#define BUTTON_OFF      1
#define BUTTON_TOGGLE   2

enum {PUSHED, RELEASED};    // enum = 열거형
enum{       // PUSHED 0,1,2.. / RELEASED 1,2...
    NO_ACT,             // 0
    ACT_PUSH,           // 3 대입하면 3
    ACT_RELEASE,        // 4
};

typedef struct{
    volatile uint8_t *ddr;  // DDR의 주소이기 때문에 포인터임
    volatile uint8_t *pin;  // PORT 처럼 PIN의 주소 값을 가져오기 때문에 포인터임
    uint8_t btnPin;         // 핀번호
    uint8_t prevState;      // 핀의 상태
}BUTTON; // 이름대체

void buttonInit(BUTTON *btn, volatile uint8_t *ddr,
     volatile uint8_t *pin, uint8_t pinNum);

uint8_t buttonGetState(BUTTON *btn);     


