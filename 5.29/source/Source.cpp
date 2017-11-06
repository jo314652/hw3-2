#include <stdio.h> 
#include <stdlib.h> 

int LCM(int x, int y);

int main(void) {

	int num1, num2;

	printf("¿é¤J¨â¼Æ¡G");
	scanf_s("%d %d", &num1, &num2);

	printf("LCM¡G%d\n", LCM(num1,num2));

	system("pause");
	return 0;
}

int LCM(int x, int y)
{
	int s = x * y;

	while (y != 0) {
		int r = x % y;
		x = y;
		y = r;
	}

	return s / x;

}