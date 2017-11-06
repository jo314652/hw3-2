#include <stdio.h>
#include <stdlib.h>

char Conversion(char x);


int main(void)
{
	char enter;
	printf("輸入一個大寫或小寫的英文字母:");
	scanf_s("%c", &enter);

	printf("轉換為:%c\n", Conversion(enter));

	system("pause");
	return 0;
}


char Conversion(char x)
{
	if (x >= 65 && x <= 90)return x += 32;
	if (x >= 97 && x <= 122)return x -= 32;
}