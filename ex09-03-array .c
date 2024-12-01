#include <stdio.h>
int main(void)
{
    char str[] = "";
    printf("문자열을 입력해주세요 \n"); // 맨뒤에 '\0' 까치 포함하여 길이 계산한다. 실제로는 값의-1을해야 글자 길이가 나온다.
    scanf("%s",&str);
    printf("%s\n",str);

    // char mind[30] = "I Love Programming!";
    // printf("%s\n",mind);

    // mind[7] ='\0';
    // printf("%s\n",mind);
    // printf("%c\n",mind[8]);
    // printf("%d",sizeof(mind));
    
    
    return   0;
}