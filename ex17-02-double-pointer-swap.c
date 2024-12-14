#include <stdio.h>
#include <string.h>

void swapNumber(int **dptr1, int **dptr2)
{
    int *temp;

    temp = *dptr1;
    *dptr1 = *dptr2;
    *dptr2 = temp;
}
int main(void)
{
    int number1 = 33;
    int number2 = 99;

    int *ptr1 = &number1, *ptr2 = &number2;
    printf("스왑하기전 *ptr1: %p, *ptr2: %p\n", ptr1, ptr2);


    swapNumber(&ptr1, &ptr2);
    printf("number1: %p,  number2: %p\n", &number1, &number2);
    printf("number1: %d,  number2: %d\n", number1, number2);
    printf("스왑한후 *ptr1: %p, *ptr2: %p\n", ptr1, ptr2);
    printf("*ptr1: %p, *ptr2: %p\n", &ptr1, &ptr2);
    printf("*ptr1: %d, *ptr2: %d\n", *ptr1, *ptr2);


    return 0;
}