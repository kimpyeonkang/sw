#include <stdio.h>

int factorial(int n) {
	int f = 1;
	for (int i = 1; i <= n; i++) {
		f = f * i;
	}
	return f;
}
int main(void) {
	int n;
	double result = 1.0;
	printf("������ ����ұ��: ");
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		result += 1.0 / factorial(i);
	}
	printf("���Ϸ��� ���� %f�Դϴ�", result);
	return 0;
}