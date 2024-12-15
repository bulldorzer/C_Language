#include <stdio.h>
#include <string.h>
#include <stdlib.h> // 동적 할당 함수를 사용하기 위한 헤더파일 선언


// 함수를 사용하여 지역변수 문제해결하기
char* getString(void){
    char* str = (char*)malloc(sizeof(char) * 100);
    printf("좋아하는 단어는?");
    gets(str);

    return str;
}
int main(void)
{
    char* result = getString();
    printf("당신이 좋아하는 단어는: %s\n",result);

    if (result != NULL) free(result);
    
    
   
    
    

    return 0;
}