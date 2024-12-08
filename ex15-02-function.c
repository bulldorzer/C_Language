#include <stdio.h>
#include <string.h>

// add 함수의 원형(선언부)
int add(int a, int b);

//리턴 없는 함수 선언
void printHello(void);
int main(void)
{
    // 사용자 정의 함수 호출
    int result = add(1,2);
    printf("함수의 결과: %d\n",result);

    // printHello 호출
    printHello();    
    return 0;
}

// 함수의 기능 (정의부)
int add(int a, int b){
    return a+b;
}

// 리턴 타입이 없는 함수
void printHello(void){
    printf("Hello");
}
