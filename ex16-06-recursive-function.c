#include <stdio.h>
#include <string.h>

int sayHello(int count){
    printf("Hello\n");
    if (count ==3)
    {
        return 0;
    }
    
    sayHello(++count);
    
}

int main(void)
{
    // 재귀함수 호출
    sayHello(1); 
    return 0;
}