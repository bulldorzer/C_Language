#include <stdio.h>
#include <string.h> // 문자열을 사용하기 위한 헤더파일 선언
#include <stdlib.h> // 동적 할당 함수를 사용하기 위한 헤더파일 선언

/*
    구조체의 typedef 
    구조체 이름도 typedef 할수 있음
*/
typedef struct{
    int x;
    int y;
}POINT;

struct person
{
    char name[100];
    int age;
};
// 정의된 구조체에 대한 typedef
typedef struct person PERSON;

int main(void)
{
    POINT position = {30,60};
    PERSON saram = {"김사랑",10};

    printf("%d,  %d\n",position.x,position.y );
    printf("%s,  %d\n",saram.name, saram.age );

    return 0;
}