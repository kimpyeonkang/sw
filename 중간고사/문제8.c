#include <stdio.h>
int main(void)
{
	int x;
	int y;

	printf("x , y��ǥ�� �Է��ϼ���.: ");
	scanf_s("%d %d", &x, &y);

	if (x > 0)
	{
		if (y > 0)
			printf("1��и��Դϴ�.");
		else
			printf("4��и��Դϴ�.");
	}
	else
	{
		if (y > 0)
			printf("2��и��Դϴ�.");
		else
			printf("3��и��Դϴ�.");
	}
	return 0;
}