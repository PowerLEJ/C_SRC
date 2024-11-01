#include <stdio.h>

int main(void)
{
    int i = 1;
    int sum = 0;

    while (1)
    {
        sum += i;
        if(sum > 30) break;
        i++;
    }
    printf("%d\n", sum);
    printf("%d\n", i);

    return 0;
}