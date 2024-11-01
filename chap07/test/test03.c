#include <stdio.h>

double div(double x, double y);

int main(void)
{
    double num1 = 5.0, num2 = 3.0;
    double res = 0.0;

    res = div(num1, num2);

    printf("%.1lf\n", res);

    return 0;
}

double div(double x, double y)
{
    double result = 0;
    result = x / y;

    return result;
}