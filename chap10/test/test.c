#include <stdio.h>

void sum(int *ary1, int *ary2, int *ary3, int cnt);

int main(void)
{
    int ary1[3] = {1, 2, 3};
    int ary2[3] = {4, 5, 6};
    int ary3[3] = {0, 0, 0};
    int *p1 = ary1, *p2 = ary2, *p3 = ary3;

    int cnt = sizeof(ary3) / sizeof(ary3[0]);

    sum(ary1, ary2, ary3, cnt);

    // // 배열명 접근
    // for(int i = 0; i < cnt; i++) {
    //     ary3[i] = ary1[i] + ary2[i];
    //     printf("ary3[%d] = %d\n", i, ary3[i]);
    // }

    // // 포인터 접근
    // for(int i = 0; i < cnt; i++) {
    //     p3[i] = p1[i] + p2[i];
    //     printf("p3[%d] = %d\n", i, p3[i]);
    // }

    return 0;
}

void sum(int *ary1, int *ary2, int *ary3, int cnt)
{
    for(int i = 0; i < cnt; i++) {
        *(ary3 + i) = *(ary1 + i) + *(ary2 + i);
        printf("*(ary3 + %d) = %d\n", i, *(ary3 + i));
    }
}