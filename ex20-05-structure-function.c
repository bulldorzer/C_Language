#include <stdio.h>
#include <string.h> // 문자열을 사용하기 위한 헤더파일 선언
#include <stdlib.h> // 동적 할당 함수를 사용하기 위한 헤더파일 선언

typedef struct
{
    int s_id;
    int age;
} Student;

Student setStudent(int s_id, int age)
{
    Student s = {s_id, age};
    return s;
}

void printStudent(Student s)
{
    printf("학번: %d, 나이: %d \n", s.s_id, s.age);
}

int main(void)
{
    Student s = setStudent(21127021, 20);
    printStudent(s);

    return 0;
}