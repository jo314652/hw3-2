#include <stdlib.h>
#include <stdio.h>


long int integerPower(int base, int exponent);

int main(void)
{
	int base, exponent;

	printf("Enter the base and exponent:");
	scanf_s("%d %d", &base, &exponent);
	printf("value=%d\n", integerPower(base, exponent));

	system("pause");
	return 0;
}

long int integerPower(int base, int exponent)
{
	if (exponent == 0) return 1;
	else return base*integerPower(base, exponent - 1);

}