#include <stdio.h>
int main(void)
{
    // 길이 정보가 포함된 배열 선언 및 초기화
    int number[3] = {1,2,3};

    // 길이 정보가 포함되지 않은 배열 선언 및 초기화
    char characters[] = {'a','b','c','d','e','f'};

    int odd[3];
    odd[0]=1;
    odd[1]=2;
    odd[2]=3;
    // printf("%d %d %d",odd[0],odd[1],odd[2]);

    for (int i = 0; i < 3; i++)
    {
        printf("%d   ",odd[i]);
    }
    


    return 0;
}