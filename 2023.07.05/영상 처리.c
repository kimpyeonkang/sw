#include <stdio.h>
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
		}
	}
}
int main(void)
{
	int image[size][size]=
	{
		{10,20,30,40,50},
		{10,20,30,40,50},
		{10,20,30,40,50},
		{10,20,30,40,50},
		{10,20,30,40,50}
	};

	print_image(image);
	brighten_image(image);
	print_image(image);

	return 0;
}