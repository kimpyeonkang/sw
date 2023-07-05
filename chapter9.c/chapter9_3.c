#include <stdio.h>

int check();
int check() {
	static int call_count = 0;
	call_count++;
	if (call_count > 3) {
		printf("로그인 횟수 초과");
		return 0;
	}
	printf("비밀번호: ");
	int n;
	scanf_s("%d", &n);
	if (n == 1234) {
		printf("로그인 성공");
		return 1;
	}
	return 0;
}
int main(void)
{
	check();
	check();
	check();
	check();
	return 0;
}