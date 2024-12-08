#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[50]="apple id good!";
    char str2[50]="berry is good!";
    char str3[50];
    
    //각 문자열의 길이 체크
    printf("str1의 길이: %d, str2의길이: %d \n",sizeof(str1),sizeof(str2));
    printf("str1의 입력된 문자열 길이: %d, str2의 입력된 문자열 길이: %d \n",strlen(str1),strlen(str2));
    
    // str1의 내용 전체를 str3에 복사하기(대입하기)
    strcpy(str3,str1);
    printf("str1을 str3에 복사 %s \n",str3);

    // str1의 처음 2글자만 str2에 복사하기
    strncpy(str2,str1,3);
    printf("str1을 str2에 2글자복사 %s \n",str2);

    // 다른위치 문자열 복사하기
    strncpy(str2+3,str1+3,2);
    printf("str1을 str2에 2글자복사 %s \n",str2);
    
    // 함수 안에는 주소 값을 표시해야 한다 값을 넣으면 안된다 
    //=> 이게 다른 언어에도 적용이 된다 java같은경우에도 배열은 모두 주소값이 있다 객채도 포함 함수사용할때 그냥 사용할수 있엇던것은 값이 아닌 배열의 주소값이 포함되어 있엇기 떄문이다
    strncpy(&str2[3],&str1[3],2);
    printf("str1을 str2에 2글자복사 %s \n",str2);

    return 0;
}