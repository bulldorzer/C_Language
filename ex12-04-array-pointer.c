#include <stdio.h>
int main(void)
{
    // 2개의 행과 3개의 열로 이루어진 2차원 배열
    int arr[2][3] ={
        {1,2,3},
        {4,5,6}
    };
    // 2차 배열로 선언 안했을때
    int *pArr = arr; // int pArr = {1,2,3,4,5,6}

    // 2차 배열로 선언 하였을때
    int (*paArr)[3] = arr;
    
    printf("%d\n",arr[0][0]);
    printf("%d\n",*pArr);
    printf("\n");
    // 인덱스 다음값으로 넘어간다.
    printf("%d\n",arr[0][1]);
    printf("%d\n",*(pArr+1));
    printf("\n");
    // 2차배열 포인터는 가로로 넘어가는 것이 아닌 세로축으로 넘어간다.
    printf("%d\n",arr[0][1]);
    printf("%d\n",*(paArr+1)[0]);
    return 0;
}