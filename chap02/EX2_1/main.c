#include <stdio.h> // 표준입출력 라이브러리

int main(void)
{	
	// EX2_1
	printf("%d\n", 10 + 20);
		
	// EX2_2 문자열 출력
	printf("Be happy!\n");	
	printf("My friend\n\n");
	printf("My\tfriend\n");
	printf("Goot\bd\tchance\n");
	printf("Cow\rW\a\n");
	
	// EX2_4
	// 정수 출력
	printf("%04d\t%04d\n", 10, 20);
	printf("%04d\t%04d\n", 100, 200);
	printf("%04d\t%04d\n", 1000, 2000);
	printf("%ld\n", 1000000000000);
	printf("%lld\n", 1000000000000LL);

	// 실수 출력
	printf("%5.1lf\n", 3.14); // 실수 출력은 기본적으로 6자리까지 기본 출력
	printf("%7.6lf\n", 3.44684987975465);
	printf("%.10lf\n", 3.4);
	
	// 확인문제 2번 Page63
	printf("<<확인문제 2번>>\n");
	printf("%d을 %d로 나누면 %lf입니다.\n", 1, 2, 0.5);

	// Page67
	printf("0%o\n", 12);
	printf("0x%x\n", 12);
	printf("0x%X\n", 12);
	printf("0x%02x\n", 12);
	printf("0x%02X\n", 12);

	return 0;
}
