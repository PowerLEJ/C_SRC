#include <stdio.h>

int main(void)
{
    int a;
    int *pa; // *는 포인터임. pa는 포인터 변수임(주소값을 저장)

    pa = &a; // &은 주소연산자
    *pa = 10; // *는 간접참조연산자. a에 10을 넣어준 것과 같다.

    printf("%u\n", &a); // 4294958572
    printf("%u\n", a); // 10
    printf("%u\n", &pa); // 4294958576
    printf("%u\n", pa); // 4294958572
    printf("%u\n", *pa); // 10
    
    return 0;
}