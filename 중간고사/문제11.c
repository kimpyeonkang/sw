#include <stdio.h>
int main(void)
{
	int num;
	int i;

	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);
	printf("%d�� ����� : ", num);

	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}