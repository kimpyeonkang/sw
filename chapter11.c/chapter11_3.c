#include <stdio.h>
#include <stdlib.h>

void array_fill(int *a, int size);
void array_prinf(int *a, int size);

int main()
{
	int a[10];
	array_fill(a, 10);
	array_prinf(a, 10);

	return 0;
}

void array_fill(int* a, int size)
{
	int i;
	for (i = 0; i < size; i++) {
		a[i] = rand();
	}
}

void array_prinf(int* a, int size)
{
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}