#include <stdio.h>
// 문자열
// - 연속된 문자들의 집합,모임
// '\0' <-- 마지막에 포함되어 있어야 함
/*
int main()
{
    char null_1 = '\0';
    char null_2 = 0;
    char null_3 = (char)NULL;
    char not_null = '0';

    printf("NULL의 아스키 값: %d, %d, %d \n", null_1,null_2,null_3);
    printf("'0'의 아스키 값: %d \n", not_null );
}

int main()
{
    char sentence_1[5] ={'G','o', 'o','d',NULL};
    char sentence_2[5] ={"Good"};
    char str[] = "abcd"; // 이런 형태로 많이 사용
    char test[10] = "";  // 문자열 초기화 (마지막에 NULL떄문에 9자까지만 가능)

    printf("sentence_1: %s \n", sentence_1);
    printf("sentence_2: %s \n", sentence_2);

}*/
/*
int strLength(char *str) // str 주소값으로 전달
{
    int i = 0;
    while (str[i]){
        i++;
    }
    return i;
}

int main()
{
    char str[] = {"good morning"}; // 배열
    printf("문자열의 길이: %d \n", strLength(str)); // 12
    printf("배열의 크기: %d\n",sizeof(str)); // 13 (NULL문자 때문)
}*/

// 구조체
// - 서로 다른 데이터형의 변수들의 연속된 메모리의 유한 집합
// - 사용자 데이터 형을 만듬

/*
struct human    // human 이라는 구조체의 정의
{
    int age;
    int heigtl;
    int weigeht;

};

int main()
{
    struct human info; // 구조체 변수 선언

    info.age = 22;  // 초기화작업
    info.heigtl = 177;
    info.weigeht = 99;

    printf("나이: %d \n", info.age);
    printf("키: %d \n", info.heigtl);
    printf("몸무게: %d \n", info.weigeht);
}*/

#include <string.h>
/*
struct contact{
    char name[20];
    char phone[20];
    int ringtine;
};

int main()
{
    struct contact ct1 = {"아이유","010-1234-5678",0};
    struct contact ct2 = {0}, ct3 = {0};

    ct1.ringtine = 5;   // 벨소리 변경
    strcpy(ct1.phone, "01022223333"); // 전화번호 변경

    printf("이름: %s\n",ct1.name);
    printf("전화번호: %s\n",ct1.phone);
    printf("벨소리: %d\n",ct1.ringtine);
}*/

#include <stdatomic.h>

/*
struct test{
    int a,b,c,d;
};

int main()
{
    struct test st;
    struct test *ptr; // 포인터 (8바이트)

    ptr = &st;

    // 1번째 방법
    (*ptr).a = 1; // 우선순위 때문에 괄호로 묶음
    (*ptr).b = 2; // 메모리에 대입하기

    // 2번째 방법
    ptr->c = 3;
    ptr->d = 4;

    printf("%d, %d\n",st.a,st.b); // 1 2
    printf("%d, %d\n",st.c,st.d); // 3 4
}*/

/*
struct test{
    int c, *pointer;
};

int main()
{
    struct test t;
    struct test *pt = &t;
    int i = 0;

    t.pointer = &i;
    *t.pointer = 3;

    printf("i: %d\n",i); // 3

    *pt->pointer = 4; // -> 가 * 보다 우선순위가 빠름
    printf("i: %d\n",i); // 4
 }*/

 struct test{
    int c;
 };

 int add_one(int *a)
 {
    *a += 1;
    return 0;
 }

 int main()
 {
    struct test t;
    struct test *pt = &t;

    pt->c = 0; // pt가 가르키는 구초체 변수 c의 값 0으로

    add_one(&t.c);
    printf("t.c: %d\n", t.c); // 1

    add_one(&pt->c);
    printf("t.c: %d\n", t.c); // 2
 }