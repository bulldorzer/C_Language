#include <stdio.h>
#include <string.h> // 문자열을 사용하기 위한 헤더파일 선언
#include <stdlib.h> // 동적 할당 함수를 사용하기 위한 헤더파일 선언


typedef struct
{
    char title[100];
    int published;
}Book;

typedef struct{
    Book book[3]; // 멤버로 길이 정보 3인 Book구조체 배열
}Bag;


int main(void)
{
    // 구조체 변수를 선언과 동시에 초기화
    Bag myBag = {
        {
            {"지금 하지 않으면 언제 하겠는가",2018},
            {"타이탄의 도구들",2017},
            {"12가지 인생의 법칙",2018}
        }
    };

    for (int i = 0; i < 3; i++)
    {
        printf("책제목: %s (%d)\n",myBag.book[i].title,myBag.book[i].published);
    }
    

    return 0;
}