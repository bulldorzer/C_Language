#include <stdio.h>
int main(void)
{
    int inum = 999;
    int *iptr /*포인터*/= &inum;/*주소 연산자*/;  

    printf("%d\n",*iptr); // 간접 참조 연산자
    printf("%d\n",iptr); // 16진수 주소값을 10진수로 표시한것

    printf("%p\n",&inum); /*주소 연산자*/
    printf("%p\n",iptr);
    printf("%p\n",&iptr); // 포인터변수 주소값 가지고 있음

    return 0;
}