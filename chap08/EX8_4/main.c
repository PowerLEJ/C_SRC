#include <stdio.h>

int main(void)
{
    char str[80] = "applejam"; // 배열명은 배열의 0번요소의 주소이다. (저것의 배열명은 str임)

    printf("sizeof = %lu\n", sizeof("applejam")); // 맨뒤에 널값(\0)을 넣어줘서 9
    printf("sizeof = %lu\n", sizeof(str)); // 배열의 전체 사이즈 보여줘서 80

    printf("%s\n", str);

    printf("============================\n");

    char str1[80] = "cat";
    char str2[80];
    // char str2[80] = str1; // str1은 0번요소의 주소이므로 불가능한 코드
    // char *p = str1; // 이렇게 되어야 함
    // str2 = "dog"; // 문자열은 대입연산자를 못쓴다. 초기화 할 때는 가능

    printf("============================\n");

    char str3[3];

    str3[0] = 'O';
    str3[1] = 'K';
    printf("%s\n", str3);

    return 0;
}