#include <stdio.h>
int main(void)
{
    int arr[2][3][4]={
        {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12}
        },
        {
            {21,22,23,24},
            {25,26,27,28},
            {29,30,31,32}
        }
    };

    printf("%d\n",arr[0][0][0]);
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int x = 0; x < 4; x++)
            {
                printf("%d ",arr[i][j][x]);
            }
            printf("\n");
        }
        printf("\n");
    }
    

    return 0;
}