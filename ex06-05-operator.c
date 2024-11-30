#include <stdio.h>
int main(void)
{
    int num = -10;
    int absolute = num > 0 ? num : num * -1;

    printf("절대 값 :%d\n", absolute);

    return 0;
}