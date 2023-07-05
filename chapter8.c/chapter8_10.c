#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
		printf("%d ", rand() % 81 + 10);
	printf("\n");
	return 0;
}
