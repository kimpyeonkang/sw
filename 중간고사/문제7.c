#include <stdio.h>
int main(void) 
{
	int x, y, z, min; 

	printf("정수 3개를 입력하시오.");
	scanf_s("%d %d %d", &x, &y, &z);

	if (x > y)
		min = y;
	else
		min = x;
	if (z < min)
		min = z;

	printf("가장 작은 값은 %d입니다.", min);
	return 0;
}