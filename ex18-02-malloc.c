#include <stdio.h>
#include <stdlib.h> // 동적 할당 함수를 사용하기 위한 헤더파일 선언

int main(void)
{
    // int형 5개만큼 사이즈로 메모리공간 할당
    int *iptr = (int *)malloc(sizeof(int) * 5); // int[5]의 크기와 같음 4bit*5 20bit

    // double형 3개 만큼 메모리공간 할당 8*3 24bit 할당
    double *dptr = (double *)malloc(sizeof(double) * 3);

    for (int i = 0; i < 5; i++)
    {
        iptr[i] = 10 * (i + 1);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("iptrp is %d\n", iptr[i]);
    }
    printf("\n");
    
    dptr[0]=3.14; dptr[1]=4.31; dptr[2]=1.43;

    for (int i = 0; i < 3; i++)
    {
        printf("dptr is %.3F\n",dptr[i]);
    }

    if (iptr != NULL) free(iptr); // 동적으로 할당된 메모리해제
    if (dptr != NULL) free(dptr); // 동적으로 할당된 메모리해제
   
    
    

    return 0;
}