#include <stdio.h>
#include <string.h>

int myFunc(int num1, int num2){
    printf("num1: %d, num2: %d\n", num1, num2);
}

/*
    int (*fptr)(int,int) 함수포인터 매개변수로 선언
*/

void runFunc(int (*fptr)(int,int), int num1, int num2){
    fptr(num1,num2);
}

int main(void)
{
    int (*fptr)(int,int);
    fptr = myFunc; // 함수 포인터 저장

    fptr(9,6);

    // runFunc(myFunc,9,6);


    return 0;
}