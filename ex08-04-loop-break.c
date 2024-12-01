#include <stdio.h>
int main(void)
{
    int num;
    while (1)
    {
        printf("-1 입력시 종료\n");
        scanf("%d",&num);
        if (num == -1)
        {
            break;
        }
            printf("%d를 입력하였습니다.\n",num);
        
    }
    

    return 0;
}