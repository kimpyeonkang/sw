#include <stdio.h>
double round(double f);
double round(double f)
{
	return (int)(f + 0.5);
}
int main(void)
{
	double f;
	printf("실수를 입력하시오: ");
	scanf_s("%lf", &f);
	printf("반올림한 값은 %lf입니다.", round(f));
}