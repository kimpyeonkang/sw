#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 5

void printf_image(int image[size][size])
{
	int r, c;
	for (r = 0; r < size; r++) {
		for (c = 0; c < size; c++) {
			printf("%2d ", image[r][c]);
		}
		printf("\n");
	}
	printf("\n");
}

void random_image(int image[size][size])
{
	int r, c;
	int i = 0;
	int cnt = 0;
	while (1) {
		r = rand() % 5;
		c = rand() % 5;

		if (image[r][c] == 0) {
			image[r][c] = i;
			i++;
		}
		cnt++;
		if (i >= 25)
			break;
	}
	printf("½Ãµµ È½¼ö: %d\n", cnt);
}

int main(void)
{
	int image[size][size] = { 0 };

	srand((unsigned)time(NULL));
	random_image(image);
	printf_image(image);

	return 0;
}