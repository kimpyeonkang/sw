#include <stdio.h>

double square(double num) {
	return num * num;
}
int main(void) {
	double n;
	printf("������ �Է��ϼ���: ");
	scanf_s("%lf", &n);
	printf("�־��� ���� %f�� ������ %f�Դϴ�", n, square(n));
	return 0;
}