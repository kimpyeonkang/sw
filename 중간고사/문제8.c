#include <stdio.h>
int main(void)
{
	int x;
	int y;

	printf("x , y좌표를 입력하세요.: ");
	scanf_s("%d %d", &x, &y);

	if (x > 0)
	{
		if (y > 0)
			printf("1사분면입니다.");
		else
			printf("4사분면입니다.");
	}
	else
	{
		if (y > 0)
			printf("2사분면입니다.");
		else
			printf("3사분면입니다.");
	}
	return 0;
}