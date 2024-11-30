#include <stdio.h>
int main(void)
{
    int x = 7; //0 0111 (2진수)
    printf("%d << 2 = %d\n", x, x << 2);
    // 0 0111을 2번 왼쪽으로 옮김
    // 0 11100
    printf("%d >> 2 = %d\n", x, x >> 2);

    return 0;
}