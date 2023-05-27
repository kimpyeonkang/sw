#include <stdio.h>

int is_leap(int year) {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("%d년은 366일입니다.", year);
	}
	else {
		printf("%d년은 365일입니다", year);
	}
}
int main(void) {
	int y;
	printf("연도를 입력하시오: ");
	scanf_s("%d", &y);
	is_leap(y);
	return 0;
}