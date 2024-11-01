#include <stdio.h>

double func(int x, double y);
void print_avg(double x);

int main(void)
{
    int score[5];
    int i;
    int total = 0;
    double avg;

    int cnt = sizeof(score) / sizeof(score[0]); // sizeof를 이용한 요소의 개수

    for (i = 0; i < cnt; i++)
    {
        scanf(" %d", &score[i]);
        total += score[i];
    }
    
    avg = func(total, (double)cnt);

    for (i = 0; i < cnt; i++)
    {
        printf("%5d", score[i]);
    }
    printf("\n");
    
    print_avg(avg); // printf("평균 : %.1lf\n", avg);

    return 0;
}

double func(int x, double y)
{
    double result;
    result = x / y;

    return result;
}

void print_avg(double x)
{
    printf("평균 : %.1lf\n", x);;
}