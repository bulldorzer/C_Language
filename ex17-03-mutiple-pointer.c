#include <stdio.h>
#include <string.h>


int main(void)
{
    int num = 999;
    int *ptr1 = &num;
    int **dptr1 = &ptr1;
    int ***tptr1 = &dptr1;
    int ****qptr1 = &tptr1;
    int *****fptr1 = &qptr1;
    

    printf("%d %d %d %d %d %d\n",num ,*ptr1, **dptr1, ***tptr1, ****qptr1, *****fptr1);
    printf("%p %p %p %p %p %p\n",num ,ptr1, *dptr1, **tptr1, ***qptr1, ****fptr1);
    printf("%p %p %p %p %p %p\n",num ,ptr1, dptr1, tptr1, qptr1, fptr1);


    return 0;
}