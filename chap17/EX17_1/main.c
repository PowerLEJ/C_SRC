#include <stdio.h>

struct student
{
    int num;
    double grade;
}; // struct{}; 에는 새미콜론 꼭 붙여야 함


int main(void)
{
    struct student s1;

    s1.num = 2; // num은 구조체의 맴버 변수
    s1.grade = 2.7;
    printf("학번 : %d\n", s1.num);
    printf("학점 : %.1lf\n", s1.grade);

    return 0;
}