#include <stdio.h>

int main(void)
{
    int kor = 80, eng = 30, mat = 90;
    int subject[5] = {1,2,3,4,5};

    // subject[0] = kor;
    // subject[1] = eng;
    // subject[2] = mat;

    int cnt = sizeof(subject) / sizeof(subject[0]); // 요소의 전체 크기 / 요소 하나의 크기

    for (int i = 0; i < cnt; i++)
    {
        printf("%d\n", subject[i]);
    }
    
    return 0;
}