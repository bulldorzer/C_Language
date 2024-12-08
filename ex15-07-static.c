#include <stdio.h>
#include <string.h>

// (선언부) - 변수나, 전역변수

int glober = 10;

void increaseNumber(){
    // 처음 초기화 이후부터는 계속 값이 쌓임
    // 접근 제한을 위한 static 변수 선언
    // 함수의 실행이 끝나도 static변수는 살아 있음
    static int number = 0;
    // int number = 0;
    number++;
    printf("number: %d\n",number);
}

int main(void)
{
    increaseNumber();
    increaseNumber();
    increaseNumber();
    increaseNumber();
    increaseNumber();
    increaseNumber();
    printf("전역변수: %d\n",glober);
    // printf("static: %d\n",number);
    
    return 0;
}

// 함수의 기능 (정의부)
