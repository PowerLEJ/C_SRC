#include <stdio.h>

void sum(int x, int y); // 반환값은 없고, 매개변수는 있다

int main(void)
{
    sum(1, 10);
    sum(10, 100);
    sum(100, 200);

    return 0;
}

void sum(int x, int y)
{
    int temp = 0;

    for (int i = x; i < (y + 1); i++)
    {
        temp += i;
    }

    printf("%d부터 %d까지의 합은 %d입니다.\n", x, y, temp);
}