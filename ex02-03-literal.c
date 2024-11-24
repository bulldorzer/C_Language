#include <stdio.h>
// 매크로 상수선언
#define LENGTH 10 // 매크로 상수 정의에서는 세미콜론이 필요하지 않음

int main(void)
{

    int number = 3;
    // 심볼릭 상수
    const int NUMBER = 5;
    number = 10;

    printf("%d\n", LENGTH);
    printf("%d\n", number);
    printf("%d\n", NUMBER);

    // LENGTH=20; // 매크로상수 값 변경이 불가함
    // NUMBER = 10 ; // 심볼릭 상수도 값 변경이 불가함
    return 0;
}