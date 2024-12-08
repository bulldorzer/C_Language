#include <stdio.h>
#include <string.h>

// 사용자 정의 함수 선언
int add(int a, int b){
    return a+b;
}

int main(void)
{
    // 사용자 정의 함수 호출
    int result = add(1,2);
    printf("함수의 결과: %d",result);

    return 0;
}