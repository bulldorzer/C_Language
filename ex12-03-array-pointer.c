#include <stdio.h>
int main(void)
{
    // 2개의 행과 3개의 열로 이루어진 2차원 배열
    int arr[2][3] ={
        {1,2,3},
        {4,5,6}
    };

    // 열이 3개인 2차원 배열 포인터
    int (*pArr)[3] = arr;

    printf("arr: %p\n",arr);
    printf("pArr: %p\n",pArr);
    printf("pArr+1: %p\n",*(pArr+1));

    // 배열을 사용하여 주소값 출력
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("주소값: %p ",&pArr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("값 : %d ",pArr[i][j]);

            printf("포인터값 : %d \n",(*(pArr+i))[j]);
        }
        printf("\n");
    }
    
    

    return 0;
}