// interrupt를 이용 하여 버튼 제어
#include <def.h>


ISR(INT7_vect){
    PORTD ^= 0xff; 
}


int main(){
    sei();          // 전역 인트럽트 inable
    // EICRB =0x00;    // low형태
    // EICRB =0xc0;    // rising Edge 에서 interrup 발생
    EICRB =0x80;    // falling Edge 에서 interrup 발생
    // EICRB =0x40;    // anylogical Edge
    EIMSK = 0x80;   // INT7 inable
    DDRE &= ~(1<<7); 
    DDRD = 0xff;    // led 활성화
    // PORTD = 0xff;
    while (1) {
    
    }

}

