#include <stdio.h>

int main(void)
{
    char *p = "apple";
    // p[0] = 'A'; // a는 상수라서 A로 못바꾼다.
    
    printf("%s\n", p);

    return 0;
}