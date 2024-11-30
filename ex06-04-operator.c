#include <stdio.h>
int main(void)
{
    int i=1;
    printf("1)전위 증감 연산자: %d \n",++i); // i+1 연산후 출력
    printf("i의값은 : %d\n",i);
    printf("2)후위 증감 연산자: %d \n",i++); // i출력후 i+1연산
    printf("i의값은 : %d\n",i);
    printf("3)전위 감소 연산자: %d \n",--i); // i-1 연산후 출력
    printf("i의값은 : %d\n",i);
    printf("4)후위 감소 연산자: %d \n",i--); // i출력후 i-1연산
    printf("i의값은 : %d\n",i);

    return 0;
}