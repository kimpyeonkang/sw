#include <stdio.h>

int get_integer(void) {
	int num;

	printf("������ �Է��Ͻÿ�: ");
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
		printf("%d�� �Ҽ��Դϴ�.\n", n);
	}
	else {
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
	}
	return 0;
}