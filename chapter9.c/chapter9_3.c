#include <stdio.h>

int check();
int check() {
	static int call_count = 0;
	call_count++;
	if (call_count > 3) {
		printf("�α��� Ƚ�� �ʰ�");
		return 0;
	}
	printf("��й�ȣ: ");
	int n;
	scanf_s("%d", &n);
	if (n == 1234) {
		printf("�α��� ����");
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