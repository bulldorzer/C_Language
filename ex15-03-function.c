#include <stdio.h>
#include <string.h>

// add 함수의 원형(선언부)
int getBigger(int n1, int n2){
    if (n1 > n2){
        return n1;
    }else if (n1<n2){
        return n2;
    }else{
        return 0;
    }
}

int main(void)
{
    // 사용자 정의 함수 호출
    int result = getBigger(1,2);
    printf("1. 함수의 결과: %d\n",result);

    result = getBigger(3,2);
    printf("2. 함수의 결과: %d\n",result);

    result = getBigger(2,2);
    printf("3. 함수의 결과: %d\n",result);
    return 0;
}
