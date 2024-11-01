#include <stdio.h>
#include "sub.h"

int main(void)
{
    int a, b;
    double avg;

    input_data(&a, &b);
    avg = average(a, b);
    printf("%d와 %d의 평균 : %.1lf\n", a, b, avg);

    return 0;
}