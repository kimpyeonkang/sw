#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int x, y, z;
	printf("���� 3���� �Է��Ͻÿ�: ");
	scanf_s("%d %d %d", &x, &y, &z);

	if (x > y)
		if (y > z)
			printf("���� ���� ������ %d�Դϴ�.\n", z);
		else
			printf("���� ���� ������ %d�Դϴ�.\n", y);
	else if (x > z)
		if (z > y)
			printf("���� ���� ������ %d�Դϴ�.\n", y);
		else
			printf("���� ���� ������ %d�Դϴ�.\n", z);
	else if (y > x)
		if (x > z)
			printf("���� ���� ������ %d�Դϴ�.\n", z);
		else
			printf("���� ���� ������ %d�Դϴ�.\n", x);
	else if (y > z)
		if (z > x)
			printf("���� ���� ������ %d�Դϴ�.\n", x);
		else
			printf("���� ���� ������ %d�Դϴ�.\n", z);
	else if (z > x)
		if (x > y)
			printf("���� ���� ������ %d�Դϴ�.\n", y);
		else
			printf("���� ���� ������ %d�Դϴ�.\n", x);
	else
		if (y > x)
			printf("���� ���� ������ %d�Դϴ�.\n", x);
		else
			printf("���� ���� ������ %d�Դϴ�.\n", y);

	return 0;
}