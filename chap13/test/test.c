#include <stdio.h>

void swap_ary(int *pa, int *pb, int cnt); // 함수 선언
void print_ary(int *x, int cnt);

int main(void)
{
    int ary1[3] = {1, 2, 3};
    int ary2[3] = {4, 5, 6};

    int cnt = sizeof(ary1) / sizeof(ary1[0]);

    swap_ary(ary1, ary2, cnt); // 함수 호출

    print_ary(ary1, cnt);
    print_ary(ary2, cnt);

    return 0;
}

void swap_ary(int *pa, int *pb, int cnt) // 함수 구현(정의)
{
    int temp[3] = {0};

    for(int i = 0; i < cnt; i++) {
        
        temp[i] = pa[i];
        pa[i] = pb[i];
        pb[i] = temp[i];

        // temp[i] = *(pa + i);
        // *(pa + i) = *(pb + i);
        // *(pb + i) = temp[i];

    }
}

void print_ary(int *x, int cnt)
{
    for(int i = 0; i < cnt; i++) {
        if(i == cnt - 1) {
            printf("%d\n", x[i]); // *(x + i)
        } else {
            printf("%d, ", x[i]); // *(x + i)
        }
    }
}

