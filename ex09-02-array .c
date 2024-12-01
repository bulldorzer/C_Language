#include <stdio.h>
int main(void)
{
    char greet[] = "Hello, Guys!";
    printf("%s\n",greet);
    printf("1차원 배열 greet의 길이는: %d\n",sizeof(greet)); // 맨뒤에 '\0' 까치 포함하여 길이 계산한다. 실제로는 값의-1을해야 글자 길이가 나온다.

    char mind[30] = "I Love Programming!";
    printf("%s\n",mind);

    mind[7] ='\0';
    printf("%s\n",mind);
    printf("%c\n",mind[8]);
    printf("%d",sizeof(mind));
    
    
    return   0;
}