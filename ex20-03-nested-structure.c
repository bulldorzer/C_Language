#include <stdio.h>
#include <string.h> // 문자열을 사용하기 위한 헤더파일 선언
#include <stdlib.h> // 동적 할당 함수를 사용하기 위한 헤더파일 선언


typedef struct
{
    char title[100];
    int published;
}Book;

typedef struct{
    Book book;
}Bag;

int main(void)
{
    // 구조체 변수를 선언과 동시에 초기화
    Bag myBag = {
        {"지금 하지 않으면 언제 하겠는가",2018}
    };

    printf("책제목: %s \n 출간년도: %d\n",myBag.book.title,myBag.book.published);

    return 0;
}