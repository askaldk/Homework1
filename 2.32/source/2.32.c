#include <stdio.h>
#include <stdlib.h>
double weight, height, BMI;
int main()
{
	printf("�п�J�A���魫(kg):");
	scanf_s("%lf", &weight);
	printf("�п�J�A������(m):");
	scanf_s("%lf", &height);
	BMI = weight / (height * height );
	printf("BMI is %.4f\n", BMI);
	if (BMI < 18.5)
		printf("�L��\n");
	else if (BMI >= 18.5 && BMI < 25)
		printf("�A��\n");
	else if (BMI >= 25 && BMI < 30)
		printf("�L��\n");
	else
		printf("�έD\n");
	system("pause");
	return 0;
}