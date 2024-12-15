#include <stdio.h>
#include <string.h>

char* getString(void) {
    // 함수안에서 결과값이 나온이유는 함수 영역안에서 데이터가 남아 있고 함수 호출되고나서는 모든 값들이 날아가기 떄문
    char str[100];
    printf("좋아하는 단어는? \n");
    gets(str);
    printf("함수 안에서 결과 %s\n", str);
    return str;
}

int main(void)
{
    char* result = getString(); // 스택영역에 있던 함수가 수행되면서 지역변수가 소멸하여 값이 남아 있지 않아 null로 표시됨

    printf("You favorite word is %s\n",result);

    return 0;
}