#include <stdio.h>
#include <string.h>

// (선언부)

int localFunc(int num)
{
    int result = 0;
    return result + num;
}

int main(void)
{
    int num = 5;
    int result = localFunc(num);
    printf("result의 값: %d\n", result);

    num = 8;
    result = localFunc(num);
    printf("result의 값: %d\n", result);
    return 0;
}

// 함수의 기능 (정의부)
