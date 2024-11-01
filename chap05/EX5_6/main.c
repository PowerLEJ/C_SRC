#include <stdio.h>

int main(void)
{
    int rank = 0, m = 0;

    printf("rank 값을 입력하시오\n");
    scanf(" %d", &rank);

    switch (rank)
    {
    case 1:
        m = 300;
        break;
    case 2:
        m = 200;
        break;
    case 3:
        m = 100;
        break;
    default:
        m = 10;
        break;
    }

    printf("m : %d\n", m);

    return 0;
}