#include <stdio.h>

/*// 함수 ( printf함수는 stdio.h의 함수 ) // void 함수란?
int print_hello()   // int print_hello(); << 함수의 원형선언
{                   // 함수를 main함수 아래에 적어도 불러와서 사용가능!
    printf("Hello World!!\n");
    return 0;
}

int main()
{
    printf("함수를 불러보자 ");
    print_hello();

    printf("함수를 또 불러보자 ");
    print_hello();

}*/

/*// 매개변수
int and(int x, int y); // int의 형식을가진 x, y 선언하여 add 함수에서 사용

int  main()
{
    int a, b, sum;  // 3개의 int형의 지역변수를 선언
    a = 3;
    b = 5;
    sum = add(a, b);

    printf("a와 b의 합은? : %d \n",sum);
}

int add(int x, int y)
{
    return x + y;
}*/

/*#define add(x,y) (x + y)    // 매크로 상수

int  main()
{
    int a, b, sum;  // 3개의 int형의 지역변수를 선언
    a = 4;
    b = 6;
    sum = add(a, b); // add(4,6) -> (4+6)

    printf("a와 b의 합은? : %d \n",sum);
    printf("a와 10의 합은? : %d \n",add(a,10));
}*/

// 변수의 유효범위
// 지역변수, 전역변수, 정적변수, 레지스터변수
/*// 지역변수 (함수내에서 선언된 변수)
//  - 선언된 함수내에서만 유효, 함수가 종료 -> 메모리 삭제

void local();   // 함수 원형 선언

int main()
{
    int i = 5;
    int var = 10;

    printf("main함수 내의 지역변수 값은: %d\n", var);   // 10

    if ( i < 10){
        local();    // 20
        int var = 30;
        printf("if문 내의 지역변수 값: %d\n", var); // 30
    }
    printf("현재 지역변수 값은? %d\n",var); // 10
}

void local()
{
    int var = 20;
    printf("local()함수 내의 지역변수 값은?: %d\n", var);
}*/

/*// 전역변수 ( 함수 외부에 선언된 변수)
// - 프로그램 어디에서나 접근이 가능
// - 프로그램이 종료되어야 메모리에서 삭제
// - 메모리상의 데이터(data) 영역에 저장
// - 직접 초기화 하지 않아도 자동으로 0으로 초기화
// - 컴파일 할 때 메모리공간 확보

void local();   // 함수 원형 선언
int var;    // 전역 변수 선언

int main()
{
    printf("전역변수 값은: %d\n", var); // 0 전역변수
    int i = 5;
    int var = 10;

    printf("main함수 내의 변수 값은: %d\n", var);   // 10 지역변수

    if ( i < 10){
        local();    // 20
        printf("if문 내의 변수 값: %d\n", var); // 10 지역변수
    }
    printf("현재 변수 값은? %d\n",var); // 10 지역변수
}

void local()
{
    int var = 20;
    printf("local()함수 내의 변수 값은?: %d\n", var);
}*/

/*// 정적변수 (static 키워드로 선언된 변수)
// - 지역변수와 전역변수의 특징을 모두 가진다
// - 함수내에서 선언된 정적변수는 단 한번만 초기화 된다
// - 직접 초기화 하지 않아도 자동으로 0으로 초기화
// - 프로그램이 종료되어야 메모리에서 삭제
// - 지역변수처럼 해당 함수내에서만 접근 가능

void local();
void staticVar();

int main()
{
    for(int i=0; i<3; i++){

        local();
        staticVar();
        printf("\n");

    }

}   // 1번째 1번째, 1번째 2번째, 1번째 3번째

void local()    // 지역변수
{
    int count = 1;
    printf("local함수가 %d 번째 호출\n", count);
    count++;
}

void staticVar()    // 정적변수 (메인함수 안에서 호출해서 사용 불가)
{
    static int staticCount = 1;
    printf("staticVar함수가 %d 번째 호출\n", staticCount);
    staticCount++;
}*/

// 배열
// - 같은 데이터형의 변수들로 이루어진 유한 집합
// - 배열을 구성하는 각각의 값을 요소라고 한다.
// - 배열의 위치를 가르키는 숫자를 인덱스라고 한다.
// ** 배열의 모든 요소는 항상 연속된 메모리에 할당 **

// int arrVar[10]; // 10개의 크기의 정수형 배열
// #define a 10
// int arrVar[a];  // 배열의 크기의 매크로 상수 가능
// int b 10;
// int arrVar[b];  // 배열의 크기에 변술 정의 된 값 불가
// int arrVar[];  // 배열의 크기는 공란으로 가능
/*
int main()
{
    int arr[5];
    int byteSize = 0;
    int size = 0;

    byteSize = sizeof(arr); // 변수의 크기를 byte단위로 반환
    printf("배열의 바이트 크기: %d\n", byteSize); // 1int = 4byte

    size = sizeof(arr) / sizeof(arr[0]);
    printf("배열의 크기: %d\n", size);
}*/
/*
int main()
{
    int arr[] = {55,66,77,15,44,33,15};
    int size;
    int key;
    int flag =0;

    size = sizeof(arr)/sizeof(arr[0]);

    printf("arr = ");
    for(int i =0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("찾을 키 값은: ");
    scanf("%d",&key);

    for(int i =0; i<size; i++){
        if(arr[i] == key){
            printf("찾을 원소의 인덱스: %d\n",i);
            flag = 1;
        }
    }
    if(!flag){
        printf("찾은 원소가 없다\n");
    }
}*/

/*
#define MAX 30

int main()
{
    char sentence[MAX] = {0};
    char key;

    printf("30자 내의 문자를 입력하세요:"); // happy
    
    for(int i = 0; i<MAX; i++){
        scanf("%c", &sentence[i]);
        if(sentence[i] == '\n')
        {
            sentence[i] == '\0';    // 문자열의 끝을 표시함
            break;
        }
    }
    printf("찾을 문자를 입력하세요: "); // p
    scanf("%c", &key);
    for(int i =0; i < MAX; i++){
        if(sentence[i] == key){
            printf("%d 번째에서 찾았습니다 \n", i+1);   // 3번째 4번째
        }
    }

}*/

/*
int main()
{
    int decimal;
    int binary[20] = {0};
    int position = 0;

    printf("2진수로 변환할 10진수를 입력: ");
    scanf("%d", &decimal);      // 59

    while(1){
        binary[position] = decimal % 2; // 정수를 2로 나눠서 나머지를 배열에 저장
        decimal = decimal / 2;          // 2로 나눈 몫을 저장
        position++;                     //자릿수 변경

        if(decimal == 0){
            break;                      // 몫이 0이면 반복문을 끝냄
        }
    }
    // 나머지인 배열을 역순으로 출력
    for(int i=position-1; i >=0; i--){
        printf("%d", binary[i]);       // 111011
    }
    printf("\n");
}*/

/*// 2차원 배열
int arr_2[3][3] = {
    {1,2,3,},
    {4,5,6},
    {7,8,9}
};


int main()
{
    int arr2[3][3] = {
        {1,4,6},
        {8,5,2},
        {7,9,5}
    };
    printf("%d",arr2[0][1]);
}*/

/*// 포인터 ( 메모리의 주소값을 저장하는 변수 )
// - & : 변수의 이름앞에 사용, 해당 변수의 주소값을 반환(번지연산자)
// - * : 포인터의 이름이나 주소앞에 사용, 포인터가 가르키는 주소에 저장된 값을 변환
//        ( 참조, 역참조연산자 )
int main()
{
    int *pi;
    double *pd;
    char *pc;

    printf ("int형의 포인터 크기: %d \n", sizeof(pi));      // 8
    printf ("double형의 포인터 크기: %d \n", sizeof(pd));   // 8
    printf ("char형의 포인터 크기: %d \n", sizeof(pc));     // 8

} // 포인터가 가르키는 자료형과 무관하게 같은 시스템에서는 모든 포인터의 크기가 동일하다


// 포인터 초기화
int main()
{
//    int *ptr2 = NULL    // 안전한 초기화

    int *ptr;
    int a;
    ptr = &a;  // 변수 a의 주소값을 포인터 p에 대입 

    ptr = &a;
    a = 2;

    printf("포인터에 들어있는 주소: %p\n",ptr); // 0x7fffffffda8c
    printf("변수 a에 들어있는 주소: %p\n",&a);  // 0x7fffffffda8c
    printf("변수 a에 들어있는 값: %d\n",a);     // 2
    printf("포인터에 들어있는 값: %d\n",*ptr);  // 2

}

int main()
{
    int a = 10;
    const int *p = &a; // 포인터(p)가 가르키는 값을 변경할 수 없음

    *p = 20;  // ❌ 컴파일 오류
    int a1 = 30;
    p = &a1;  // ✅ 가능 ( 포인터 자체는 바꿀 수 있음 )

    int b = 10;
    int * const p2 = &b; // 포인터(p2) 자체를 변경할 수 없음

    *p2 = 20;  // ✅ 가능 ( 포인터가 가르키는 값은 변경 가능 )
    int c = 30;
    p2 = &b;   // ❌ 컴파일 오류
}


int main()
{
    int a, b;
    int *pa = &a;
    int *pb = &b;

    int *pc = pa + pb; // 포인터끼리 덧셈 불가
}

int main()
{
    int a;
    int *pa = &a;
    int *pb;

    *pa = 3;
    pb = pa;
    printf("pa의 값: %d\n",*pa);
    printf("pa의 주소: %p\n",*pa);
    printf("pb의 값: %d\n",*pb);
    printf("pb의 주소: %p\n",*pb);
}

// 배열과 포인터
int main()
{
    int arr[5] = {100,90,80,50,60};

    int *parr = arr;
    int sum = 0;

    while (parr - arr <= 4){
        sum += (*parr);
        parr++;
    }
    printf("점수 평균: %d \n", sum/5);
}

int main(){
    int a;
    int *pa;
    int **ppa;

    pa = &a;
    ppa = &pa;
    a = 3;

    printf("a의 값: %d | *pa의 값: %d | **ppa의 값: %d \n",a,*pa,**ppa);
    printf("a의 주소: %p | pa의 주소: %p | **ppa의 저장값: %p \n",&a,pa,*ppa);
    printf("pa의 주소: %d | ppa의 값: %d  \n",a,&pa,ppa);
}*/

int main()
{
    int arr[3] = {1,2,3};
    int *p = arr;

    for (int i=0; i<3; i++)
    {
        printf("p = %p, ",p);
        printf("*p = %d\n", *p++);
       // printf("*p = %d\n", (*p)++);
    }
}