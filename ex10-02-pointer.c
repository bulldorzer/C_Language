#include <stdio.h>
int main(void)
{
    int num = 10;
    int *pnum  = &num;

    printf("pnum 값 : %d\n",pnum);

    printf("*pnum :%d\n",*pnum); 
    num = 14;
    printf("pnum :%d\n",*pnum);
    
    *pnum = 30;
    printf("num :%d\n",num);
    return 0;
}