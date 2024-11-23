/*
    변수
        메모리 공간에 붙여진 이름
        C 프로그램 사용되는 모든 값을 메모리 공간에 저장
*/

#include <stdio.h>

int main(void){

    int number1;    // 변수 선언
    number1 = 1;    // 초기화
    

    int number2 = 2; // 변수 선언 및 초기화

    printf("number 1 = %d\n",number1);
    printf("number 2 = %d\n",number2);
    
    // 사용 불가한 변수명들
    // int hello boy =3;   // 공백포함
    // int hi#$ = 5;       // 특수기호사용
    // int 8number = 8;    // 숫자로 시작
    // int short = 3;      // 기능이 있는 키워드를 변수명으로 사용

    int number = 3;
    int Number = 4;
    printf("%d\n%d",number,Number);
    return 0;
}