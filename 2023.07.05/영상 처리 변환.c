#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 5
void print_image(int image[size][size])
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
void brighten_image(int image[size][size]) {
	int r, c;
	for (r = 0; r < size; r++) {
		for (c = 0; c < size; c++) {
			if (r == c)
				image[r][c] = 0;
			if (r + c == 4)
				image[r][c] = 0;
		}
	}
}
void random_image(int image[size][size])
{
	srand((unsigned)time(NULL));
	int r, c;

	for (int d = 0; d < 25; d++) {
		r = rand() % 5;
		c = rand() % 5;
		if (image[r][c] == -1)
			image[r][c] = 9;
	}
}
int main(void)
{
	int image[size][size]=
	{
		{-1,-1,-1,-1,-1},
		{-1,-1,-1,-1,-1},
		{-1,-1,-1,-1,-1},
		{-1,-1,-1,-1,-1},
		{-1,-1,-1,-1,-1}
	};

	print_image(image);
	brighten_image(image);
	random_image(image);
	print_image(image);

	return 0;
}