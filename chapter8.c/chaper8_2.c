#include <stdio.h>
int is_multiple(int n, int m);
int main(void)
{
	int n, m;
	printf("ù ��° ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &n);
	printf("�� ��° ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &m);
	if (is_multiple(n, m) == 1)
		printf("%d�� %d�ǹ���Դϴ�.",n,m);
	else
		printf("����� �ƴմϴ�.");
}

int is_multiple(int n, int m)
{
	return (n % m == 0) ? 1 : 0;
}
