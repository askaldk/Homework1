#include<stdio.h>
#include<stdlib.h>
int a, b, c, d;
int main()
{
	for (a = 1; a <= 9; a++)         /*�Ĥ@�ӹ�*/
	{
		printf("*");
	}
	printf("\n");
	for (b = 1; b <= 7; b++)
	{
		printf("*");
		for (c = 1; c <= 7; c++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for (a = 1; a <= 9; a++)
	{
		printf("*");
	}
	for (a = 1; a <= 3; a++)
	{
		printf("\n");
	}



	for (a = 1; a <= 3; a++)      /*�ĤG�ӹ�*/
	{
		printf(" ");
	}
	for (a = 1; a <= 3; a++)
	{
		printf("*");
	}
	printf("\n");
	printf(" ");
	printf("*");
	for (a = 1; a <= 5; a++)
	{
		printf(" ");
	}
	printf("*\n");
	for (a = 1; a <= 5; a++)
	{
		printf("*");
		for (b = 1; b <= 7; b++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	printf(" ");
	printf("*");
	for (a = 1; a <= 5; a++)
	{
		printf(" ");
	}
	printf("*\n");
	for (a = 1; a <= 3; a++) 
	{
		printf(" ");
	}
	for (a = 1; a <= 3; a++)
	{
		printf("*");
	}
	for (a = 1; a <= 3; a++)
	printf("\n");


	for (a = 1; a <= 3; a++)          /*�ĤT�ӹ�*/
	{
		for (b = 1; b <= 3 - a; b++)
			printf(" ");
		for (c = 1; c <= 2 * a - 1; c++)
			printf("*");
		printf("\n");
	}
	for (a = 1; a <= 6; a++)
	{
		printf("  ");
		printf("*\n");
	}
	for (a = 1; a <= 3; a++)
		printf("\n");


	printf("    ");                                  /*�ĥ|�ӹ�*/
	printf("*\n");
	for (a = 1; a <= 4; a++)          
	{
		for (b = 1; b <= 4 - a; b++)
		{
			printf(" ");
		}
		    printf("*");
		for (c = 1; c <= 2 * a - 1; c++)
			printf(" ");
		    printf("*\n");
	}
	for (a = 1; a <= 3; a++)
	{
		for (b = 1; b <= a; b++)
		{
			printf(" ");
		}
		printf("*");
		for (c = 1; c <= 2 * (4 - a) - 1; c++)
			printf(" ");
		printf("*\n");
	}
	printf("    ");
	printf("*\n");
	system("PAUSE");
	return 0;
}
