#include <stdio.h>
int show_digit(int x) {
	if (x / 10 > 0) {
		show_digit(x / 10);
	}
	printf("%d ",x % 10);
}
int main(void) {
	int x;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &x);
	show_digit(x);
	return 0;
}