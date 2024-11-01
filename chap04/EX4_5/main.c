#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, c = 10;
    int res;

    res = (a > b);
    printf("a > b\t : %d\n", res);

    res = (a >= b);
    printf("a >= b\t : %d\n", res);

    res = (a < b);
    printf("a < b\t : %d\n", res);

    res = (a <= b);
    printf("a <= b\t : %d\n", res);

    res = (a <= c);
    printf("a <= c\t : %d\n", res);

    res = (a == b);
    printf("a == b\t : %d\n", res);

    res = (a != c);
    printf("a != c\t : %d\n", res);

    return 0;
}