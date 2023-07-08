#include<stdio.h>
#define size 5
int main(void)
{
	int arry[5][5];
	int i, j, idx = size;
	int w = -1, s = 0, inc = 1, val = 0;
	
	while (1)
	{
		for (i = 0; i < idx; i++) // 가로 단위 그림
		{
			val++;
			w = w + inc;
			arry[s][w] = val;
		}
		idx--;

		if (val == size * size)
			break;

		for (i = 0; i < idx; i++) // 세로 단위 그림
		{
			val++;
			s = s + inc;
			arry[s][w] = val;
		}
		inc *= -1;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			printf("%2d ", arry[i][j]);
		printf("\n");
	}

	return 0;
}
