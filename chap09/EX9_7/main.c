#include <stdio.h>

void swap(int *pa, int *pb); // 매개변수(주소저장) 하려면 포인터

int main(void)
{
    int a = 10, b = 20;

    swap(&a, &b); // 인자값(주소)
    printf("main 함수에서 a : %d, b : %d\n", a, b);

    return 0;
}

void swap(int *pa, int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
    printf("swap 함수 에서 *pa : %d, *pb : %d\n", *pa, *pb);
}