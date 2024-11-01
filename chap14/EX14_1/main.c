#include <stdio.h>

int main(void)
{
    int score[3][4];
    int *p = score[0];
    int val = 0;
    int total;
    double avg;
    int i, j;

    for(i = 0; i < 3; i++) {
        printf("4과목의 점수 입력 : \n");
        for(j = 0; j < 4; j++) {
            score[i][j] = val;
            val += 2; // val++;

            printf("%d\n", score[i][j]);
            // scanf("%d", &score[i][j]);
        }
    }

    for(int i = 0; i <12; i++) {
        printf("*(p + %d) = %d\n", i, *(p + i));
    }

    // for(i = 0; i < 3; i++) {
    //     total = 0;
    //     for(j = 0; j <4; j++) {
    //         total += score[i][j];
    //     }
    //     avg = total / 4.0;
    //     printf("총점 : %d, 평균 : %.2lf\n", total, avg);
    // }

    return 0;
}