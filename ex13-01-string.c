#include <stdio.h>
int main(void)
{
    char good[] = "Good!";
    char *bad = "Bad!";

    printf("good[] : %s\n", good); //{'G', 'o' ,'o' ,'d' , '!', '\0'}
    printf("*bad : %s\n", bad);// *bad = &"Bad!"
    printf("bad 주소값: %p\n", bad);
    // 배열기반 문자열 변수
    good[0] = 'H'; // 요소로 값 변경  배열주소로 저장되어 있어 전체적인 덩어리로는 변경이 불가하나 요소하나엔 접근 가능하다
    // bad[0] = 'S'; // 요소로 값 변경불가 값 저장이 불가능 상수(Constant) : 리터럴 주소값으로 저장되어있어 요소하나하나 접근이 불가함
    printf("good 요소변경: %s\n", good);
    printf("bad 요소변경 안됨: %s\n", bad);

    // good[] = "New Good"; // 새로운 문자열 대입 불가능!
    printf("good 전체값 변경 불가!: %s\n", good);
    bad = "New Bad"; // 새로운 리터럴 생성
    printf("bad 전체값 변경: %s\n", bad);
    printf("bad 새로운 주소값 생성됨!: %p\n", &bad);

    return 0;
}