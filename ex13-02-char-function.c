#include <stdio.h>
int main(void)
{
    int ch1, ch2, temp;
    ch1 = getchar();
    ch2 = getchar();

    // 스왑
    temp = ch1;
    ch1 = ch2;
    ch2 = temp;

    putchar(ch1); //scanf와 같음
    putchar(ch2);

    return 0;
}