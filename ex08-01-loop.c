#include <stdio.h>
int main(void)
{
    int num=0,num2=0;

    // while (num <3)
    // {
    //     printf("num is %d now\n",num);
    //     num++;
    // }

    while (num2 != -1)
    {
        printf("숫자를 입력 하세요 (-1 입력시 종료)\n");
        scanf("%d",&num2);

        if (num2 == -1)
        {
            printf("종료합니다.\n");
        }else
        {
            printf("%d를 입력했습니다.\n",num2);
        }
        
        
    }
    
    printf("While 구문 종료\n");

    return 0;
}