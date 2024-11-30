#include <stdio.h>
int main(void)
{
    int a = 3; // 2진수 0011
    int b = 5; // 2진수 0101
    printf("3 & 5 = %d\n", a & b);
    printf("3 | 5 = %d\n", a | b);
    printf("3 ^ 5 = %d\n", a ^ b);
    // printf("~(3 & 5) = %d\n", ~(a & b));
    printf("~3 = %d\n", ~a);

    return 0;
}