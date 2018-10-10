#include <stdio.h>
#include <stdlib.h>
int number1, number2;
int main()
{
	printf("please input the first number:");
	scanf_s("%d", &number1);
	printf("please input the second number:");
	scanf_s("%d", &number2);
	if (number1 % number2 == 0)
		printf("The first is a multiple of the second\n");
	else
		printf("The first is not a multiple of the second\n");
	system("pause");
	return 0;
}