#include <stdio.h>
int main(void) 
{
	int x, y, z, min; 

	printf("���� 3���� �Է��Ͻÿ�.");
	scanf_s("%d %d %d", &x, &y, &z);

	if (x > y)
		min = y;
	else
		min = x;
	if (z < min)
		min = z;

	printf("���� ���� ���� %d�Դϴ�.", min);
	return 0;
}