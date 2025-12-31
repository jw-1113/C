// 'a' 입력하면 pd0 on / 'b' 입력하면 pd0 off

#include "ap/ap6/ap6.h"
#include "../driver/led.h"
#include <stdint.h>

char rxData;
LED led;
uint8_t ledData = 0x01;

void ap6Init(){
    UART_Init();
    ledInit();
    led.port = &PORTD;
    led.pinNumber = 0;

}

void ap6Main(){
  while (1) {
 //   UART0_Transmit(UART0_Receive());  // 입력값 리시ㅂ해줌
    rxData = UART0_Receive();
    
    if (rxData == 'a'){
        //ledOn(&led);
        for(uint8_t i =0; i<7; i++){
            ledLeftShift(&ledData);
            _delay_ms(300);
        }
    }
    if (rxData == 'b'){
        ledOff(&led);
    }

}

  
}
