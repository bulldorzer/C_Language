#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[50] = "Michael ";
    char str2[50] = "Michael ";

    // strcat 문자열 이어 붙이기
    strcat(str1,"Bolton");
    puts(str1);


    strncat(str2,"Jackson Five",7);
    puts(str2);

    // str1과 str2 비교
    printf("비교결과: %d \n", strcmp(str1,str2));

    // str1과 str2 비교 앞의 7개 문자 비교
    printf("비교결과: %d \n", strncmp(str1,str2,7) );

    return 0;
}