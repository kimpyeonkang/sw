#include <stdio.h>
double get_bigger(double a, double b);
double get_bigger(double a, double b)
{
	return (a > b) ? a : b;
}
int main(void)
{
	double a, b;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf %lf", &a, &b);
	printf("ū ���� %.1lf�Դϴ�.", get_bigger(a, b));
	return 0;
}