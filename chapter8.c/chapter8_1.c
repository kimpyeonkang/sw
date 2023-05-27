#include <stdio.h>

double square(double num) {
	return num * num;
}
int main(void) {
	double n;
	printf("정수를 입력하세요: ");
	scanf_s("%lf", &n);
	printf("주어진 정수 %f의 제곱은 %f입니다", n, square(n));
	return 0;
}