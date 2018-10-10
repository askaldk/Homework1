#include <stdio.h>
#include <stdlib.h>
int a, b, c;
int main()
{
	for (a = 1; a <= 5; a++)          
	{
		for (b = 1; b <= 5 - a; b++)
			printf(" ");
		for (c = 1; c <= 2 * a - 1; c++)
			printf("*");
		printf("\n");
		
	}
	system("pause");
	return 0;
}