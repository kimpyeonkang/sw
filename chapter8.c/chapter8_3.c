#include <stdio.h>
double get_bigger(double a, double b);
double get_bigger(double a, double b)
{
	return (a > b) ? a : b;
}
int main(void)
{
	double a, b;
	printf("실수를 입력하시오: ");
	scanf_s("%lf %lf", &a, &b);
	printf("큰 수는 %.1lf입니다.", get_bigger(a, b));
	return 0;
}