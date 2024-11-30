#include <stdio.h>
int main(void)
{
    char btn = 'A';
    
    switch (btn)
    {
    case 'W' :
        printf("앞으로 이동\n");
        break;
    
    case 'S': 
        printf("뒤로 이동\n");
        break;
    case 'A': 
        printf("오른쪽으로 이동\n");
        break;
    case 'D': 
        printf("왼쪽으로 이동\n");
        break;
    default:
        printf("HOLD position!\n");
        break;
    }

    return 0;
}