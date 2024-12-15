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
    struct person boy[3] = {
        {"김소년", 12},
        {"유소년", 14},
        {"청소년", 16}};

    struct person girl[3];

    strcpy(girl[0].name, "이소녀");
    strcpy(girl[1].name, "오소녀");
    strcpy(girl[2].name, "하소녀");

    girl[0].age = 9;
    girl[1].age = 12;
    girl[2].age = 15;

    for (int i = 0; i < 3; i++)
    {
        printf("boy is name: %s  , age: %d \n", boy[i].name, boy[i].age);
        printf("girl is name: %s  , age: %d \n", girl[i].name, girl[i].age);
        printf("\n");
    }
    
    // printf("boy is name: %s  , age: %d \n", boy[0].name, boy[0].age);
    // printf("boy is name: %s  , age: %d \n", boy[1].name, boy[1].age);
    // printf("boy is name: %s  , age: %d \n", boy[2].name, boy[2].age);

    // printf("girl is name: %s  , age: %d \n", girl[0].name, girl[0].age);
    // printf("girl is name: %s  , age: %d \n", girl[1].name, girl[1].age);
    // printf("girl is name: %s  , age: %d \n", girl[2].name, girl[2].age);

    return 0;
}