#include <stdio.h>
#include <string.h>
int main(void)
{
    int num = 3;
    int *ptr1 = &num;
    int **dptr2 = &ptr1;
    int *ptr2 = *dptr2;

    printf("num: %p\n",&num);
    printf("*ptr1: %p\n",&ptr1);
    printf("**ptr1: %p\n",&dptr2);
    printf("*ptr2: %p\n",&ptr2);

    printf("num: %d\n",num);
    printf("*ptr1: %d\n",*ptr1);
    printf("**ptr1: %d\n",**dptr2);
    printf("*ptr2: %d\n",*ptr2);

    return 0;
}