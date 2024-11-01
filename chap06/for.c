#include <stdio.h>

int main(void)
{
    int i = 0;
    int sum = 0;

    // for문
    // 반복 횟수가 정해져 있을 때
    // 무한 반복 원할 때 조건 부분에 1 써주면 됨(언제나 참) 또는 for(;;)
    for (i = 0; i < 101; i++)
    {
        sum = sum + i;
    }
    printf("i : %d\n", i);
    printf("sum : %d\n", sum);

    return 0;
}