#include <stdio.h>

int main(void) {
	int sum = 0;
	// 1
	for (int i = 1; i <= 30; i++) {
		sum += (i * i) + 1;
	}
	printf("%d\n", sum);

	return 0;
}