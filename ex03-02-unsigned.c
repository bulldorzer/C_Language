#include <stdio.h>

// Unsigned 자료형
int main(void)
{

    char cnum = 128;  // char형의 최대값은 127이다
    unsigned char u_cnum = 255; // 해당 타입의 음수값은 포기 0~255까지 표현이 가능해짐
    short snum = 32768; // short형의 최대값은 32,767이다
    unsigned u_snum = 32768;

    printf("%d\n",cnum);
    printf("%d\n",u_cnum);
    printf("%d\n",snum);
    printf("%d\n",u_snum);

    return 0;
}