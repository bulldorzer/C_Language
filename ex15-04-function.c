#include <stdio.h>
#include <string.h>

// (선언부)

// 매개변수 없고 리턴값도 없고 호출시 실행하고 끝나는 함수
void guide(void)
{
    printf("inputNumber 함수를 통해 정수를 입력할 수 있습니다.\n");
    printf("또한 printNumber 함수를 통해 입력한정수를 출력할 수도 있습니다.\n");
}

// 매개변수 있고 리턴값도 없고 호출시 매개변수값을 받아 실행하는 함수
void printNumber(int num)
{
    printf("당신이 입력한 정수는 %d 입니다. \n", num);
}

int inputNumber(void)
{
    int num;
    printf("정수를 입력해주세요\n");
    scanf("%d", &num);

    return num;
}
// 리턴 없는 함수 선언
void printHello(void);
int main(void)
{
    guide();
    // int num = inputNumber();
    // printNumber(num);
    printNumber(inputNumber());
    return 0;
}

// 함수의 기능 (정의부)
