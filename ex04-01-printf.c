#include <stdio.h>
int main(void)
{
    // 콘솔에 출력하기
    printf("I Love C language!\n");
    printf("It is so funny\n");

    // 이스케이프 시퀸스 \기호는 글꼴에 따라 ￦(원표시) 기호로 표현될 수 있따.

    printf("\"I am young boy!\"\n");
    printf("I am young \'boy\'!\n");
    printf("I\t am\t young\t boy\t!\n");
    printf("I\b am young boy!\n");
    printf("I am young boy 79%%  \\\?\n");

    char character = 'H';
    int num = 548;
    printf("%5c\n",character); // 5칸 확보 후 오른쪽 정렬로 문자 출력
    printf("%-5c\n",character); // 5칸 확보후 왼쪽 정렬로 문자 출력

    printf("%10d\n",num); // 10칸 확보후 오른쪽 정렬로 정수출력
    printf("%-10d\n",num); // 10칸 확보후 왼쪽 정렬로 정수출력

    float fnum = 1.234567;
    printf("%10f\n",fnum); // 10칸 확보 후 오른쪽 정렬로 실수 출력 기본 소수점 6번째 자리까지
    printf("%-10f\n",fnum); // 10칸 확보 후 왼쪽 정렬로 실수 출력
    printf("%10.3f\n",fnum); // 10칸 확보 후 오른쪽 정렬로 실수 출력 소수점 3번째자리까지
    printf("%-10.3f\n",fnum); // 10칸 확보 후 왼쪽 정렬로 실수 출력 소수점 3번째자리까지

    return 0;
}