#include <stdio.h>
#include <string.h> // 문자열을 사용하기 위한 헤더파일 선언
#include <stdlib.h> // 동적 할당 함수를 사용하기 위한 헤더파일 선언

typedef struct
{
    int xpos;
    int ypos;
} Point;

void setPosSamValue(Point* ptr)
{
    if (ptr->xpos > ptr->ypos)
    {
        ptr->ypos = ptr->xpos;
    }else{
        ptr->xpos = ptr->ypos;
    }
    
}

void printPoint(Point position){
    printf("x: %d, y: %d\n",position.xpos, position.ypos);
}

int main(void)
{
    Point position1 = {66, 66};
    Point position2 = {6, 9};

    setPosSamValue(&position1);
    setPosSamValue(&position2);

    printPoint(position1);
    printPoint(position2);

    return 0;
}