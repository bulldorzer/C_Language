#include <stdio.h>
int main(void)
{
    int num1 = 20, num2 = 10;
    int result;
    result = 0 && 1;
    printf("1) result: %d\n",result);

    result = num1 == 20 && num2 == 10;
    printf("2) result: %d\n",result);

    result = num1 == num2 || num1 > num2;
    printf("3) result: %d\n",result);

    result = !(num1 == num2 || num1 > num2);
    printf("4) result: %d\n",result);

    return 0;
}