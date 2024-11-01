#include <stdio.h>

int main(void)
{
    int ary[3] = {10, 20, 30};
    int *pa = ary;
    int i;

    printf("pa = %x\n", pa);
    printf("*pa+0 = %d\n", *pa+0);
    printf("*pa+1 = %d\n", *pa+1);
    printf("*pa+2 = %d\n", *pa+2);

    printf("*(pa+0) = %d\n", *(pa+0));
    printf("*(pa+1) = %d\n", *(pa+1));
    printf("*(pa+2) = %d\n", *(pa+2));

    printf("sizeof(ary) = %d\n", sizeof(ary));
    printf("sizeof(pa) = %d\n", sizeof(pa));

    return 0;
}