#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_frac(double f, int* pi, double* pd);
int main()
{
	double d;
	double f;
	int i;
	printf("실수를 입력하시오: ");
	scanf("%lf", &d);
	printf("\n");
	get_frac(d, &i, &f);
	printf("get_frac(%lf)이 호출되었습니다.\n", d);
	printf("정수부는 %d입니다.\n", i);
	printf("소수부는 %lf입니다.\n", f);

	return 0;
}

void get_frac(double f, int* pi, double* pd)
{
	*pi = (int)f;
	*pd = f - *pi;
}