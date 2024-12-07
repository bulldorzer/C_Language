#include <stdio.h>
int main(void)
{
    int myArray[3]={1,2,3};

    printf("배열의 각 요소의 주소 확인\n");
    printf("배열 &myArrayp[0]: %p\n",&myArray[0]);
    printf("배열 &myArrayp[1]: %p\n",&myArray[1]);
    printf("배열 &myArrayp[2]: %p\n",&myArray[2]);
    printf("배열의 이름: %p\n",myArray);

    printf("배열 myArray: %p\n",myArray);
    printf("배열 myArray+1: %p\n",myArray+1);
    printf("배열 myArray+2: %p\n",myArray+2);

    return 0;
}