// 전원을 넣으면 0표시
// 1번을 누르면 0~9
// 2번을 누르면 멈춤
// 3번을 누르면 리셋 -> 0 으로설정
#include <./ap/ap4/ap4.h>
#include <def.h>
// #include <./driver/button.h>




int main(){
    ap4Init();
    ap4Main();
}



// uint8_t FND_Number[] = {
//     0x3f,0x06,0x5b,0x4f,
//     0x66,0x6d, 0x7d, 0x27,
//     0x7f, 0x6f
// };


// int main(){
//     // void ap4Init();
//     // void ap4Main();
//     BUTTON btnCount;
//     BUTTON btnStop;
//     BUTTON btnReset;
//     buttonInit(&btnCount, &BUTTON_DDR, &BUTTON_PIN, BUTTON_ON);
//     buttonInit(&btnStop, &BUTTON_DDR, &BUTTON_PIN, BUTTON_OFF);
//     buttonInit(&btnReset, &BUTTON_DDR, &BUTTON_PIN, BUTTON_TOGGLE);

//     DDRF = 0xff;
//     PORTF = FND_Number[0];
//     while (1) {
//        if(buttonGetState(&btnCount) == ACT_RELEASE) {
//             for(int i = 1; i<=10; i++){
//                 PORTF = FND_Number[i-1];
//                 _delay_ms(300);
//                 if (buttonGetState(&btnStop) == ACT_RELEASE) {
//                     break;
//                  }
//                 else if(i==9){
//                     i = 0;
//                }
//                 }
//             }
//         if (buttonGetState(&btnReset) == ACT_RELEASE) {
//             PORTF = 0x3f;
//         }
//     }
// }
