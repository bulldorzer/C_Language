#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[50] = "Michael";
    char str2[50] = "Michael";
    char str3[50];

    // strcat 이어 붙이기
    strcat(str1,"Bolton")
    strcat(str2,"Jackson")
    // 각 문자열의 길이 체크
    printf("str1 strcat결과: %s, str2 strcat결과: %s \n", sizeof(str1), sizeof(str2));
    printf("str1의 입력된 문자열 길이: %d, str2의 입력된 문자열 길이: %d \n", strlen(str1), strlen(str2));

    // str1의 내용 전체를 str3에 복사하기(대입하기)
    strcpy(str3, str1);
    printf("str1을 str3에 복사 %s \n", str3);

    // str1의 처음 2글자만 str2에 복사하기
    strncpy(str2, str1, 3);
    printf("str1을 str2에 2글자복사 %s \n", str2);

    // 다른위치 문자열 복사하기
    strncpy(str2 + 3, str1 + 3, 2);
    printf("str1을 str2에 2글자복사 %s \n", str2);

    str1과 str2의 
    strncpy(&str2[3], &str1[3], 2);
    printf("비교결과: %d \n", strncmp(str1,str2,7) );

    return 0;
}