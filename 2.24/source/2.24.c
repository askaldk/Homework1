#include <stdio.h>
#include <stdlib.h>
int main()
{
	int number;
	printf("�п�J�@�Ӿ��:");
	scanf_s("%d", &number);
	if (number % 2 == 0)
		printf("This integer is even\n");
	else
		printf("This integer is odd\n");
	system("pause");
	return 0;
}     
	