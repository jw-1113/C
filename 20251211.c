
#include <stdio.h>
/* 2025.12.11
#define COUNT 10
#define NAME "사과" // 쌍따움표는 "문자열" ( 외따옴표는 '문자')

int main()
{
    // printf("Hello Word!\n");
    printf( "%s의 갯수는 %d개\n",NAME,COUNT ); // %c (문자)
    return 0;
}
*/

/*
#include <stdio.h>

#define CLAC(x,y) ((x)+(y))

int main()
{
    printf("%d \n", CLAC(10,20));
    return 0;
}
*/

/* 2025.12.12
#include <stdio.h>

#define NUM 10

int main()
{

#ifdef NUM
    printf("NUM은 %d 입니다 \n",NUM);

#else
    printf("NUN은 정의 되어 있지않습니다 \n");

#endif
    return 0;
}
*/

/*
#include <stdio.h>

void fun()
{
    printf("현재함수: %s \n", __FUNCTION__);

}

int main()
{

    printf("컴파일 날짜: %s", __DATE__);
    printf("컴파일 시간: %s", __TIME__);
    printf("컴파일 날짜 요일 시간: %s", __TIMESTAMP__);
    printf("라인번호: %d", __LINE__);
    fun();
    printf("현재 소스 파일의 위치: %s ", __FILE__);

    return 0;
}
*/

/*
#include <stdio.h>

int main()
{
    int num;        // 정수형 변수 선언
    float x;        // 실수형 변수 선언
    char c;         // 문자형 변수 선언

    num = 123;
    x = 1.23;
    c = 'A';

    // 서식지정자 ..는 출력값의 갯수하고 반드시 같아야 한다.
    printf("%d, %x \n", num, num);
    printf("%f, %e \n", x,x);
    printf("%c \n",c);

}
*/


/*
// 문자폭 지정연습, 정밀도 지정
 int main()
 {
    int num = 12345;    //변수를 선언과 동시에 정수를 대입
    float x = 12.34567;

    printf("%d\n",num);
    printf("%d\n",num * 10);
    printf("%d\n",num * 100);
    printf("%d\n",num * 1000);

    printf("%8d\n",num);
    printf("%8d\n",num * 10);
    printf("%8d\n",num * 100);
    printf("%8d\n",num * 1000);

    printf("%8d\n",num * 100000);
    printf("%08d\n",num);

    printf("\n");
    printf("%f\n",x);
    printf("%.2f\n",x);     // 소수 2자리 출력(반올림)
    printf("%8.2f\n",x);
 }
*/

/*
// scanf 연습
int main()
{
    char name[20];
    int age;
    char gender;

    printf("이름, 나이, 성별(M/F) 순서로 입력하시오. \n");
    scanf("%s %d %c", name, &age, &gender);      //& 주소를 반환
    
    printf("이름: %s, 나이: %d, 성별: %c \n", name,age,gender);
}
*/

/*
// 데이터형의 크기 확인
// sizeof() << 연산자!! 괄호안에 있는 데이터형의 크기를 바이트를 반환
int main()
{
    char ch;
    int num;
    double x;

    printf("char 형의 바이트 크기 : %d\n", sizeof(char));
    printf("short 형의 바이트 크기: %d\n\n", sizeof(short));
    printf("변수 ch의 바이트 크기: %d\n", sizeof(ch));
    printf("변수 num의 바이트 크기: %d\n", sizeof(num));
    printf("변수 x의 바이트 크기: %d\n", sizeof(x));
}
*/

// 변수의 선언과 사용
// - 변수의 이름을 식별자라고도 한다.
// - 변수의 이름 생성 규칙!
// ** 반드시 영문자, 숫자, 밑줄기호(_)만 사용가능 **
// ** 첫글자는 반드시 영문자 또는 밑줄 기호만 사용가능 **
// ** 대소문자 구별 **
// ** C언어의 키워드 (32개)는 식별자(변수의 이름)으로 사용 불가 **

// 카멜표기법
// int nameAge << 단어 2개로 연결시 맨앞에 오는 단어는 소문자, 뒷단어는 대문자

// 파스칼 표기법
// int ManAge << 모든 단어를 대문자로 시작

// 스네이크 표기법
// int man_age << 단어를 밑줄(_)로 연결

// 헝가리안 표기법
// 변수명 앞에 데이터형을 붙이는 방식
// char ch1, ch2

// 변수의 초기화
int main()
{
    int price;
    printf("%d\n", price); // 초기화 하지 않은 값

    int amount = 0, price2 = 0, totalPrice = 0;
    printf("amount = %d, price = %d, \n", amount, price2);
    printf("수량 입력: ");
    scanf("%d", &amount);

    price2 = 1000;

    totalPrice = amount * price2;
    printf("합계: %d원\n", totalPrice);
}