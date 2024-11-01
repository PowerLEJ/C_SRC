#include <stdio.h>

// // test 1
// int main(void)
// {
//     int res;

//     res = sizeof(short) > sizeof(long);
    
//     printf("%s\n", (res == 1) ? "short" : "long");
    
//     return 0;
// }

// test 2
int main(void)
{
    int seats = 70;
    int audience = 65;
    double rate = 0.0;

    rate = ((double)audience / (double)seats) * (double)100;
    printf("입장률 : %.1lf%%\n", rate);

    return 0;
}