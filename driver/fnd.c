#include "fnd.h"

void fndDisplay(uint16_t data){
    static uint8_t position = 0;     // 디지트의 위치를 관리하기 위해 포지션의 값을 기억하기 위해 정적변수로 선언
    uint8_t fndData[10] = {
    0x3f,0x06,0x5b,0x4f,
    0x66,0x6d, 0x7d, 0x27,
    0x7f, 0x6f   // Cathode 방식
        // 0xc0,0xf9,0xa4,0xb0,
        // 0x99,0x92,0x82,0xf8,
        // 0x80,0x90    // Anode 방식
    };
    
    switch (position) {      // 디지티를 선택하기 위해 switch-case 사용
        case 0:
        // 첫번째 자리를 출력하기 위해서는, 0번핀 LOW, 1,2,3번핀 HIGH 설정 
            PORTB &= ~(1<<0);    // dight 0 on  // Cathode 방식
            PORTB |= (1<<1) | (1<<2) | (1<<3);   // digit 1,2,3 off
            // PORTB |= (1<<0);    // dight 0 on    // Anode 방식
            // PORTB &= ~((1<<1) | (1<<2) | (1<<3));   // digit 1,2,3 off    

        // 입력된 데이터를 천의 자리를 구해서 해당 디지트 값에 출력
            PORTA = fndData[data/1000];
            break;

        case 1:      
            PORTB &= ~(1<<1);
            PORTB |= (1<<0) | (1<<2) | (1<<3);
            // PORTB |= (1<<1);    // Anode 방식
            // PORTB &= ~((1<<0) | (1<<2) | (1<<3));
            PORTA = fndData[data/100%10];
            break;

        case 2:
            PORTB &= ~(1<<2);
            PORTB |= (1<<0) | (1<<1) | (1<<3);
            // PORTB |= (1<<2);    // Anode 방식
            // PORTB &= ~((1<<0) | (1<<1) | (1<<3));
            PORTA = fndData[data/10%10];
            break;

        case 3:
            PORTB &= ~(1<<3);
            PORTB |= (1<<0) | (1<<1) | (1<<2);
            // PORTB |= (1<<3);    // Anode 방식
            // PORTB &= ~((1<<0) | (1<<1) | (1<<2));
            PORTA = fndData[data%10];
            break;
    }
    position++;
    position = position % 4; // 4자리 츨력한 후에 다시 첫번째로 돌아감
}

