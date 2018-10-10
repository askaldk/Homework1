#include <stdio.h>
#include <stdlib.h>
int number1, number2, number3, max, min;
int main()
{
	printf("請輸入三個整數:");
	scanf_s("%d %d %d", &number1, &number2, &number3);
	max = number1;
	min = number1;
	if (number2 > max)
		max = number2;
	if (number3 > max)
		max = number3;
	if (number2 < min)
		min = number2;
	if (number3 < min)
		min = number3;
	printf("最大值:%d\n", max);
	printf("最小值:%d\n", min);
	system("pause");
	return 0;

}