#include <stdio.h>
int sum(int n);
int sum(int n) {
	if (n != 0)
		return n + sum(n - 1);
	else
		return n;
}
int main(void)
{
	int n, result;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);
	result = sum(n);
	printf("1���� %d������ �� = %d", n, result);
	return 0;
}