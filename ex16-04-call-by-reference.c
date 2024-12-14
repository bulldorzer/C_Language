#include <stdio.h>
#include <string.h>

void swapNumber(int* num1, int* num2){
    // 변수 swap 코드
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    printf("함수 안에서 확인 결과, num1: %d, num2: %d\n",*num1,*num2);
}

int main(void)
{
    int number1 =33 , number2 = 99;
    printf("number1: %p, number2: %p\n",&number1,&number2);

    swapNumber(&number1,&number2);
    printf("함수 호출 완료후 확인 결과, number1: %d, number2: %d\n",number1,number2);

    return 0;
}