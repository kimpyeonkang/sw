#include <stdio.h>
double cal_area(double radius);
double cal_area(double radius)
{
	return 3.141592 * radius * radius;
}
int main(void)
{
	double radius;
	printf("���� �������� �Է��Ͻÿ�: ");
	scanf_s("%lf", &radius);
	printf("���� ������ %.2lf�Դϴ�.", cal_area(radius));
}