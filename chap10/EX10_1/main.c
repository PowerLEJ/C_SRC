#include <stdio.h>

void inout_ary(int *pary, int y);

int main(void)
{
    int ary[5];
    int i;
    int cnt = 0;

    cnt = sizeof(ary) / sizeof(ary[0]);

    inout_ary(ary, cnt); // 배열명(배열의 0번지 주소)

    return 0;
}

void inout_ary(int *ary, int cnt)
{
    for (int i = 0; i < cnt; i++)
    {
        *(ary + i) = 10 + (i * 10);
        printf("*(ary + %d) : %d\n", i, *(ary + i));
        printf("ary[%d] : %d\n", i, ary[i]);
    }
}