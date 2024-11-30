#include <stdio.h>
int main(void)
{
    int score = 75;
    if (score >=90){
        printf("A 입니다\n");
    }else if (score >=80){
        printf("B 입니다\n");
    }else if (score >=70){
        printf("C 입니다\n");
    }else if (score >= 60){
        printf("D 입니다\n");
    }else{
        printf("F 입니다\n");
    }
    return 0;
}