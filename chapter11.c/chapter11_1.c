#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_frac(double f, int* pi, double* pd);
int main()
{
	double d;
	double f;
	int i;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &d);
	printf("\n");
	get_frac(d, &i, &f);
	printf("get_frac(%lf)�� ȣ��Ǿ����ϴ�.\n", d);
	printf("�����δ� %d�Դϴ�.\n", i);
	printf("�Ҽ��δ� %lf�Դϴ�.\n", f);

	return 0;
}

void get_frac(double f, int* pi, double* pd)
{
	*pi = (int)f;
	*pd = f - *pi;
}