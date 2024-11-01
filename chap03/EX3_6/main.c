#include <stdio.h>
#include <string.h>

int main(void)
{

	char fruit[20] = "strawberry";
	const double tax_rate = 0.12;
	

	printf("딸기 : %s\n", fruit);
	strcpy(fruit, "banana");
	printf("딸기쨈 : %s %s\n", fruit, "jam");

	printf("tax_rate : %.2lf\n", tax_rate);

	return 0;
}
