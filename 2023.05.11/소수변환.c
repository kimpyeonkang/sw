#include <stdio.h>

int get_integer(void) {
	int num;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);
	return num;
}
int is_prime(int num) {
	int i;

	for (i = 2; i < num; i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main(void) {

	int n, result;
	n = get_integer();

	if (is_prime(n) == 1) {
		printf("%d은 소수입니다.\n", n);
	}
	else {
		printf("%d은 소수가 아닙니다.\n", n);
	}
	return 0;
}