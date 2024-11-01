#include <stdio.h>

struct score
{
    int kor;
    int eng;
    int math;
};
typedef struct score Score;

int main(void)
{
    Score yuni = { 90, 80, 70 }; // struct score yuni
    Score *ps = &yuni; // struct score *ps

    printf("국어 : %d\n", (*ps).kor);
    printf("영어 : %d\n", ps->eng);
    printf("수학 : %d\n", ps->math);

    return 0;
}