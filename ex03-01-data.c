#include <stdio.h>

int main(void)
{
    float fNum = 0.1;
    double dNum = 0.1;

    // 반복문
    for (int i = 0; i < 100; i++)
    {
        fNum += 0.1;
        dNum += 0.1;

        // printf("int i = %d\n",i);
        // printf("fNum = %f\n",fNum);
        // printf("dNum = %f\n",dNum);
    }
    
    printf("fNum : %.20f\n",fNum);
    printf("dNum : %.20f\n",dNum);
    return 0;
}
