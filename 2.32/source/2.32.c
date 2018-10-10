#include <stdio.h>
#include <stdlib.h>
double weight, height, BMI;
int main()
{
	printf("請輸入你的體重(kg):");
	scanf_s("%lf", &weight);
	printf("請輸入你的身高(m):");
	scanf_s("%lf", &height);
	BMI = weight / (height * height );
	printf("BMI is %.4f\n", BMI);
	if (BMI < 18.5)
		printf("過輕\n");
	else if (BMI >= 18.5 && BMI < 25)
		printf("適中\n");
	else if (BMI >= 25 && BMI < 30)
		printf("過重\n");
	else
		printf("肥胖\n");
	system("pause");
	return 0;
}