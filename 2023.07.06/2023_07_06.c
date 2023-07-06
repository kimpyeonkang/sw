//a[50], b[50] 배열을 만들어서 오름차순 정렬 후 비교 후 큰 값을 c[50]에 추가하는 프로그램
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 50

void print_A(int a[size])
{
	int i;
	printf("정렬 전 a[50]= ");
	for (i = 0; i < size; i++)
		printf("%3d ", a[i]);
}

void print_B(int b[size])
{
	int i;
	printf("\n\n정렬 전 b[50]= ");
	for (i = 0; i < size; i++)
		printf("%3d ", b[i]);
}

void random_A(int a[size])
{
	int x;
	for (x = 0; x < size; x++) {
		a[x] = rand() % 100;
	}
}

void random_B(int b[size])
{
	int y;
	for (y = 0; y < size; y++) {
		b[y] = rand() % 100;
	}
}

int main(void)
{
	srand((unsigned)time(NULL));
	int a[size] = { 0 };
	int b[size] = { 0 };
	int c[size] = { 0 };
	random_A(a);
	random_B(b);
	print_A(a);
	print_B(b);
	
	int i, j = 0, temp, least = 0;
	printf("\n\n정렬 후 a[50]=");
	for (i = 0; i < size - 1; i++) {
			least = i;
			for (j = i + 1; j < size; j++)
				if (a[j] < a[least])
					least = j;
		temp = a[i];
		a[i] = a[least];
		a[least] = temp;
	}

	for (i = 0; i < size; i++)
		printf("%3d", a[i]);
	printf("\n\n");

	printf("정렬 후 b[50]=");
	for (i = 0; i < size - 1; i++) {
		least = i;
		for (j = i + 1; j < size; j++)
			if (b[j] < b[least])
				least = j;
		temp = b[i];
		b[i] = b[least];
		b[least] = temp;
	}

	for (i = 0; i < size; i++)
		printf("%3d", b[i]);

	int z;
	for (z = 0; z < size; z++) {
		if (a[z] < b[z])
			c[z] = b[z];
		else
			c[z] = a[z];
	}
	printf("\n\nc[50]= ");
	for (z = 0; z < size; z++)
		printf("%3d ", c[z]);

	return 0;
}