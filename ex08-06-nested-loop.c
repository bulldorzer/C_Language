#include <stdio.h>
int main(void)
{
    // for (int i = 0; i < 7; i++)
    // {
    //     for (int j = 0; j < 7; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
        
    // }
    

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }

    return 0;
}