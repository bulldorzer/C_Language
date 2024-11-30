#include <stdio.h>

int main(void)
{

    char character;
    int inum;
    float fnum;

    printf("문자 입력 : ");
    scanf("%c", &character);
    printf("숫자 입력 :");
    scanf("%d", &inum);
    printf("실수 입력 : ");
    scanf("%f", &fnum);

    printf("%c %d %.2af",character,inum,fnum);
    

    return 0;
}