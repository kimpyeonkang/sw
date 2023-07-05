#include <stdio.h>
int is_multiple(int n, int m);
int main(void)
{
	int n, m;
	printf("첫 번째 정수를 입력하시오: ");
	scanf_s("%d", &n);
	printf("두 번째 정수를 입력하시오: ");
	scanf_s("%d", &m);
	if (is_multiple(n, m) == 1)
		printf("%d은 %d의배수입니다.",n,m);
	else
		printf("배수가 아닙니다.");
}

int is_multiple(int n, int m)
{
	return (n % m == 0) ? 1 : 0;
}
