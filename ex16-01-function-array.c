#include <stdio.h>
#include <string.h>

int readArray(int *arr, int length){
    int i;
    
    printf("배열의 요소 읽어보기: [ ");
    for ( i = 0; i < length; i++)
    {
        printf("%d",arr[i]);
        if (i+1<length)
        {
            printf(",");
        }else
        {
            printf(" ");
        }
    }
    printf("]\n");
    
}

int main(void)
{
    int array[3]={3,6,9};
    int length =3;
    printf("array 주소값: %p\n",array);
    readArray(array,length); // array 배열 변수의 주소값과 총길이가 넘어감

    return 0;
}