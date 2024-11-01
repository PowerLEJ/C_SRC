#include <stdio.h>

int main(void)
{
	char grade;
	char name[20];
	char ch;

	printf("문자 입력 : ");
	scanf(" %c", &ch);
	printf("%c의 아스키 코드 값은 %d입니다.\n", ch, ch);

	printf("이름 입력 : ");
        scanf(" %s", name);

	printf("학점 입력 : ");
	scanf(" %c", &grade);
	
//	printf("이름 입력 : ");
//	scanf("%s", name);
	
	printf("%s의 학점은  %c입니다.\n", name, grade);

	printf("%d, %u\n", 10, 10);
	printf("%d, %u\n", (char)-10, (unsigned char)-10);

	return 0;
}
