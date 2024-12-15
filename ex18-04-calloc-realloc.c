#include <stdio.h>
#include <string.h>
#include <stdlib.h> // 동적 할당 함수를 사용하기 위한 헤더파일 선언



int main(void)
{
    int* ptr; // 할당된 메모리의 주값을 저장할 포인터
    int count = 0; // 데이터 입력받는 갯수
    int maxSize = 3; // 할당받은 메모리크기
    int num;
    
    ptr = (int*)calloc(maxSize,sizeof(int)); // malloc(sizeof(int) * maxSize)
    while (1)
    {
        printf("정수를 입력하세요(-1 입력시 종료): ");
        scanf("%d",&num);
        if (num == -1) break;

        // 입력한 정보의 개수가 메모리 크기만큼 찼을 경우
        if (count == maxSize)
        {
            maxSize += maxSize;

            // 재할당을 통한 메모리 영역 확장
            ptr = (int*)realloc(ptr,maxSize* sizeof(int));
        }

        ptr[count++] = num;
        
        
    }

    for (int i = 0; i < count; i++)
    {
        printf("%d\n",ptr[i]);
    }
    printf("\n");

    if(ptr != NULL) free(ptr);
    
    

    

    return 0;
}