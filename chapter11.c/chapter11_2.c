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
		printf("정수를 입력하시오: ");
		scanf("%d", &s[i]);
	}
	printf("\n");

	printf("주소             값\n");
	for (i = 0; i < size; i++) {
		printf("%08X\t%3d\n", p, s[i]);
	}

	return 0;
}