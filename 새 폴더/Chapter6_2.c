#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	int x, y, z;
	printf("정수 3개를 입력하시오: ");
	scanf_s("%d %d %d", &x, &y, &z);

	if (x > y)
		if (y > z)
			printf("제일 작은 정수는 %d입니다.\n", z);
		else
			printf("제일 작은 정수는 %d입니다.\n", y);
	else if (x > z)
		if (z > y)
			printf("제일 작은 정수는 %d입니다.\n", y);
		else
			printf("제일 작은 정수는 %d입니다.\n", z);
	else if (y > x)
		if (x > z)
			printf("제일 작은 정수는 %d입니다.\n", z);
		else
			printf("제일 작은 정수는 %d입니다.\n", x);
	else if (y > z)
		if (z > x)
			printf("제일 작은 정수는 %d입니다.\n", x);
		else
			printf("제일 작은 정수는 %d입니다.\n", z);
	else if (z > x)
		if (x > y)
			printf("제일 작은 정수는 %d입니다.\n", y);
		else
			printf("제일 작은 정수는 %d입니다.\n", x);
	else
		if (y > x)
			printf("제일 작은 정수는 %d입니다.\n", x);
		else
			printf("제일 작은 정수는 %d입니다.\n", y);

	return 0;
}