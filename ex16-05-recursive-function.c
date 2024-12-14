#include <stdio.h>
#include <string.h>

void sayHello(void){
    printf("Hello\n");
    sayHello();
}

int main(void)
{
    // 재귀함수 호출
    sayHello(); 
    return 0;
}