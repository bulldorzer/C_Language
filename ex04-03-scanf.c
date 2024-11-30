#include <stdio.h>
int main(void)
{
    int num1, num2 ,num3;
    float fnum1, fnum2 ,fnum3;

    // printf("세개의 정수 입력");1 2
    // scanf("%d %d %d",&num1,&num2,&num3);
    // printf("입력된 정수들 num1: %d num2: %d num3: %d \n",num1,num2,num3);
    
    // printf("세개의 실수 입력");
    // scanf("%f %f %f",&fnum1,&fnum2,&fnum3);
    // printf("입력된 실수들 fnum1: %f fnum2: %f fnum3: %f \n",fnum1,fnum2,fnum3);
    
    printf("실수 정수 실수 입력");
    scanf("%f %d %f",&fnum1,&num2,&fnum3);
    printf("입력된 실수 정수 실수들 fnum1: %f num2: %d fnum3: %f \n",fnum1,num2,fnum3);

    return 0;
}