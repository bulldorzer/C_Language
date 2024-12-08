#include <stdio.h>
#include <string.h>

// (선언부) - 변수나, 전역변수

int number = 0;

void printNumber(void){
    printf("전역변수 넘버는 %d을 저장하고 있다\n",number);
}

int main(void)
{
    int number1 = 2;
    
    printf("지역변수 넘버는 %d을 저장하고 있다\n",number);
    printf("지역변수 넘버1은 %d을 저장하고 있다\n",number1);

    // 지역 변수 선언
    int number = 3;
    printf("지역변수 넘버는 %d을 저장하고 있다\n",number);
    printNumber();
    printNumber();
    printNumber();
    printNumber();
    printNumber();
    
    return 0;
}

// 함수의 기능 (정의부)
