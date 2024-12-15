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
    // 구조체 선언과 동시에 초기화
    struct person boy = {"김소년", 12}, girl = {"이소녀", 9}; // 구조체 타입 변수 선언

    printf("boy is name: %s  , age: %d \n",boy.name,boy.age);
    printf("girl is name: %s  , age: %d \n",girl.name,girl.age);
    return 0;
}