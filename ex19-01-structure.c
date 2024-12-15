#include <stdio.h>
#include <string.h> // 문자열을 사용하기 위한 헤더파일 선언
#include <stdlib.h> // 동적 할당 함수를 사용하기 위한 헤더파일 선언

struct person
{
    char name[30];
    int age;
};


int main(void)
{
    struct person boy,girl; // 구조체 타입 변수 선언

    // name 멤버 변수에 대한 접근
    strcpy(boy.name,"김소년"); // 배열의 값변경시 사용하는 함수 strcpy
    strcpy(girl.name,"이소녀");

    // age 멤버 변수에 대한 접근
    boy.age = 12;
    girl.age = 9;

    printf("boy is name: %s  , age: %d \n",boy.name,boy.age);
    printf("boy is name: %s  , age: %d \n",girl.name,girl.age);

    return 0;
}