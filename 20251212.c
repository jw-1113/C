
#include <stdio.h>

/*
// 조건 연산자
// expression 1 ? expression 2 : expression 3
// 만약 exp1이 참(true)이면 exp2가 실행, 그렇지 않으면 exp3 이 실행
// overflow
int main()
{
    unsigned char a;
    a = 255;
    printf("%d\n", a);

    a = 256;
    printf("%d\n", a);
}*/
/*
// bit mask
int main() // AND 연산
{
    unsigned short data = 0x5678; // 0101 0110 0111 1000

    unsigned short mask1 = 0xf000; // 1111 0000 0000 0000
    unsigned short mask2 = 0x0f00; // 0000 1111 0000 0000
    unsigned short mask3 = 0x00f0; // 0000 0000 1111 0000
    unsigned short mask4 = 0x0004; // 0000 0000 0000 1111

    printf("결과 1: %#.4x\n", data & mask1);
    printf("결과 2: %#.4x\n", data & mask2);
    printf("결과 3: %#.4x\n", data & mask3);
    printf("결과 4: %#.4x\n", data & mask4);
    // 특정 비트를 뽑아낼 수 있다
}*/

/*
int main() // OR 연산
{
    unsigned short data = 0x0000; // 0000 0000 0000 0000

    unsigned short mask1 = 0xf000; // 1111 0000 0000 0000
    unsigned short mask2 = 0x0f00; // 0000 1111 0000 0000
    unsigned short mask3 = 0x00f0; // 0000 0000 1111 0000
    unsigned short mask4 = 0x0004; // 0000 0000 0000 1111

    printf("결과 1: %#.4x\n", data | mask1);
    printf("결과 2: %#.4x\n", data | mask2);
    printf("결과 3: %#.4x\n", data | mask3);
    printf("결과 4: %#.4x\n", data | mask4);
    // 특정 부분을 변경할 수 있다
}
// & 연산자는 특정비트를 0으로 만듬
// | 연산자는 특정비트를 1로 만듬
// ^ 연산자는 특정비트를 반전*/

/*
// 데이터형 변환
int main()
{
    int a, b, c;
    double avg;

    printf("정수 3개를 입력하세요: \n");
    scanf("%d %d %d", &a, &b, &c);

    avg = (double)(a + b + c)/3;

    printf("평균: %f \n",avg);

}*/
/*
//제어문

int main()
{
    int num = 0;

    printf("숫자 1개를 입력하세요: \n");
    scanf("%d", &num);

    if (num < 5){
        printf("입력하신 숫자는 5보다 작다\n");
    }
    else if (num > 5){
        printf("입력하신 숫자는 5보다 크다\n");
    }
    else{
        printf("입력하신 숫자는 5와 같다\n");
    }
    
    return 0;
}*/

/*
int main()
{
    int pm;
    printf("미세먼지 농도를 입력하시오: ");
    scanf("%d",&pm);
    
    // 중첩
    if( pm > 0 ){
        if( pm <= 30){
            printf("미세먼지 농도가 좋음이므로 마스크 벗어\n");
        }
        else if( pm <= 80){
                printf("미세먼지 농도가 보통이므로 마스크를 쓰시오\n");
            }
        else{
            printf("숫자를 잘못 넣었습니다.\n");
        }
    }
}*/
/*
int main()
{
    int num;

    printf("미세먼지 농도 선택: ");
    scanf("%d", &num);  // 입력받기

    switch (num) {
        case 1:
            printf("마스크 벗어\n");
            break;

        case 2:
            printf("마스크 써\n");
            break;

        case 3:
            printf("비싼 마스크 벗어\n");
            break;

        case 4:
            printf("방독면 쓰자\n");
            break;

        default:
            printf("잘못 적었어\n");
            break;
    }

    return 0;
}*/

/*
// while문
int main()
{
    int weight = 80;
    int count = 0;

    while (weight > 70){
        printf("빡시게 운동하세요\n");
        weight--;
        count++;
    }
    printf("고생했다\n");
    printf("%d 일 운동 했다\n", count);
}*/

//for문4
int main()
{
    int i,j;
    for( i=0; i<4; i++ ){
        for ( j=0; j<= i; j++){

            printf("*");
        }
        printf("\n");
        }

    if (i =5){
        for( i=5; i>0; i-- ){
            for ( j=0; j< i; j++){

                printf("*");
            }
            printf("\n");
        }
    }
}