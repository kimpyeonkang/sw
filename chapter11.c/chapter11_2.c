#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 3
int main()
{
	int i;
	int s[size];
	int* p;
	p = s;
	for (i = 0; i < size; i++) {
		printf("������ �Է��Ͻÿ�: ");
		scanf("%d", &s[i]);
	}
	printf("\n");

	printf("�ּ�             ��\n");
	for (i = 0; i < size; i++) {
		printf("%08X\t%3d\n", p, s[i]);
	}

	return 0;
}