#include <stdio.h>
#include <string.h> // 문자열을 사용하기 위한 헤더파일 선언
#include <stdlib.h> // 동적 할당 함수를 사용하기 위한 헤더파일 선언

typedef int INT;
typedef int *PINT;
typedef unsigned UINT;

int main(void)
{
    typedef char CHAR;
    typedef char* STR;

    // typedef 선언 이후 자료형은 기존 자료형과 동일한 역할 수행
    INT num = 3;
    PINT ptr = &num;
    UINT unum= 5;

    CHAR ch = 'C';
    STR str = "Hello!";

    printf("%d %d %d %c %s ",num,*ptr,unum,ch,str);

    return 0;
}