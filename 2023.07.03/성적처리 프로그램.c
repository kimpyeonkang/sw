#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define rows 20
#define clos 6

int main(void)
{
	srand((unsigned)time(NULL));
	int s[rows][clos] = { 0 };
	int sort[rows];

	int n = 1;
	for (int i = 0; i < rows; i++) {
		s[i][0] = n++;
		s[i][1] = rand() % 51;
		s[i][2] = rand() % 31;
		s[i][3] = rand() % 21;
		s[i][4] = rand() % s[i][1]+s[i][2]+s[i][3];
	}

	for (int i = 0; i < rows; i++) {
		sort[i] = s[i][4];
	}

	int temp, least;
	for (int i = 0; i < rows - 1; i++) {
		least = i;
		for (int j = i + 1; j < rows; j++)
			if (sort[j] < sort[least])
				least = j;
		temp = sort[i];
		sort[i] = sort[least];
		sort[least] = temp;
	}
	
	int cnt = 0;
	int grade = 1;
	for (int i = 0; i < rows; i++) {
		cnt++;
		for (int j = 0; j < rows; j++) {
			if (i != 0) {
				if (sort[i] != sort[i - 1])
					grade = cnt;
			}
				if (s[j][4] == sort[i])
					s[j][5] = grade;	
		}
	}

	printf("번호\t중간\t기말\t과제\t총점\t등수\n");
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < clos; j++) {
			printf("%d\t", s[i][j]);
		}
		printf("\n");
	}
	return 0;
}