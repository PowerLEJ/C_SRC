#include <stdio.h>

int sum(int x, int y); // 사용자 함수 선언 (변수(매개변수))

int main(void)
{
    int a = 10, b = 20;
    int result;

    result = sum(a, b); // 사용자 함수(sum) 호출 (값(인자값))

    printf("result : %d\n", result);

    return 0;
}

int sum(int x, int y) // 사용자 함수 구현
{
    int temp;

    temp = x + y;
    
    return temp;
}