#include <stdio.h>

int main(void)
{

	int kor = 70, eng = 80, mat = 90;
	int tot;

	tot = kor + eng + mat;

	printf("국어 : %d, 영어 : %d, 수학 : %d\n", kor, eng, mat);
	printf("총점 : %d\n", tot);

	char a = 0;
	scanf("%c", &a);
	printf("입력된 값 : %c\n", a);

	return 0;
}
