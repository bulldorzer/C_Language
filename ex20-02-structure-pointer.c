#include <stdio.h>
#include <string.h> // 문자열을 사용하기 위한 헤더파일 선언
#include <stdlib.h> // 동적 할당 함수를 사용하기 위한 헤더파일 선언


typedef struct
{
    int x;
    int y;
}Point;

typedef struct
{
    Point* start;   // 구조체 포인터변수 start
    Point* end;     // 구조체 포인터변수 end
}Line;


int main(void)
{
    Point p1 = {10,8};
    Point p2 = {20,40};
    Line line = {&p1,&p2};

    printf("start LINE: [%d,%d] end: [%d,%d] \n",(*line.start).x,(*line.start).y,(*line.end).x,(*line.end).x);
    printf("start LINE: [%d,%d] end: [%d,%d] \n",line.start->x,line.start->y,line.end->x,line.end->x);

    return 0;
}