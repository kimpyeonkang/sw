#include <stdio.h>
double round(double f);
double round(double f)
{
	return (int)(f + 0.5);
}
int main(void)
{
	double f;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf_s("%lf", &f);
	printf("�ݿø��� ���� %lf�Դϴ�.", round(f));
}