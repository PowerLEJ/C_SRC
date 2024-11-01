#include <stdio.h>

int main(void)
{
    int a = 1;
    int sum = 0;

    // while문
    // 반복 횟수가 정해져 있지 않을 때
    while (a < (100 +1))
    {
        sum = sum + a;
        a = a + 1; // a++
    }
    printf("a : %d\n", a);
    printf("sum : %d\n", sum);

    return 0;
}