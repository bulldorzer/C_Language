#include <stdio.h>
#include <string.h> // 문자열을 사용하기 위한 헤더파일 선언
#include <stdlib.h> // 동적 할당 함수를 사용하기 위한 헤더파일 선언


typedef struct
{
    char name[100];
    int age;
}PERSON;


int main(void)
{
    PERSON boy={"손흥민",32};
    PERSON* ptr = &boy;

    printf("%s (%d)\n",(*ptr).name,(*ptr).age);
    printf("%s (%d)\n",ptr->name,ptr->age);

    return 0;
}