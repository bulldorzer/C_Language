// #include <stdio.h>
// int main(void)
// {
//     int num;
//     for (num = 0;num <= 5;num++)
//     {
//         if (num == 3)
//         {
//             continue;
//         }
//         printf("num is %d now\n",num);
//     }
    

//     return 0;
// }

#include <stdio.h>
 
int func(){
 static int x =0; 
 printf("func_X %d\n",x);
  x+=2; 
  return x;
}
 
int main(){
  int x = 1; 
  int sum=0; 
  for(int i=0;i<4;i++) {
    x++; 
    printf("main_X %d\n",x);
    sum+=func();
    printf("sum %d\n",sum);
    printf("----------------\n");
  } 
  printf("%d", sum);
 
  return 0;
}