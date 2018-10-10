#include <stdio.h>
#include <stdlib.h>
int a, b, c;
int main()
{
	for (a = 1; a <= 9; a++)
	{
		printf("L");
	}
	printf("\n");
	for (a = 1; a <= 3; a++)
	{
		for (b = 1; b <= 4; b++)
		{
			printf(" ");
		}
		printf("L");
		printf("   ");
		printf("L\n");
	}
	for (a = 1; a <= 5; a++)
	{
		printf(" ");
	}
		printf("L");
		printf(" ");
		printf("L");
		for (a = 1; a <= 2; a++)
		{
			printf("\n");
		}
		printf("  ");
		printf("AA\n");
		printf(" ");
		printf("A\n");
		printf("A\n");
		printf(" ");
		printf("A\n");
		printf("  ");
		for (c = 1; c <= 7; c++)
		{
			printf("A");
		}
		for (a = 1; a <= 2; a++)
		{
			printf("\n");
		}
		for (a = 1; a <= 9; a++)
		{
			printf("Q");
		}
		printf("\n");
		for (a = 1; a <= 2; a++)
		{
			printf("Q");
			for (b = 1; b <= 7; b++)
			{
				printf(" ");
			}
			printf("Q\n");
		}
		printf(" ");
		printf("Q");
		for (a = 1; a <= 5; a++)
		{
			printf(" ");
		}
		printf("Q\n");
		printf("  ");
		for (a = 1; a <= 5; a++)
		{
			printf("Q");
		}

	system("pause");
	return 0;
}