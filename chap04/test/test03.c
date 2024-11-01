#include <stdio.h>

int main(void)
{
    int kor = 3, eng = 5, mat = 4;
    int credits = 0, res = 0;
    double kscore = 3.8, escore = 4.4, mscore = 3.9;
    double grade = 0.0;

    credits = kor + eng + mat;
    grade = (kscore + escore + mscore) / 3.0;
    res = (credits >= 10) && (grade > 4.0);

    printf("%d\n", res);
    
    return 0;
}