#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	double x, fx;
	printf("x�� ���� �Է��Ͻÿ�: ");
	scanf("%lf", &x);
	if (x <= 0)
		fx = x * x * x - 9.0 * x + 2.0;
	else
		fx = 7.0 * x + 2.0;
	printf("f(x)�� ���� %.2lf�Դϴ�.",fx);

	return 0;
}