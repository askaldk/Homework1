#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a, b, c;
int main()
{
	printf("number   square   cube\n");
	for (a = 0; a <= 3; a++)
	{
		 b = pow(a,2);
		 c = pow(a,3);
		printf("%d        %d        %d\n",a,b,c);
	}
	for (a = 4; a <= 9; a++)
	{
		b = pow(a, 2);
		c = pow(a, 3);
		printf("%d        %d       %d\n", a, b, c);
	}
	for (a = 10; a <= 10; a++)
	{
		b = pow(a, 2);
		c = pow(a, 3);
		printf("%d       %d      %d\n", a, b, c);
	}
	system("pause");
	return 0;
}