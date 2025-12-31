#include "ap/ap7/ap7.h"


void ap7Init(){

}



void ap7Main(){
    UART_Init();
    sei();

    stdout = &OUTPUT;   // 출력 스트림을 지정

    while (1)
    {
        if(rxFlag == 1) // 문자열 수신이 완료되면
        {
            rxFlag = 0;
            // printf(rxBuff);
            printf("%s\n", rxBuff);
        }
    }
    
}