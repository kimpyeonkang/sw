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
	printf("정수를 입력하시오: ");
	scanf_s("%d", &n);
	result = sum(n);
	printf("1부터 %d까지의 합 = %d", n, result);
	return 0;
}