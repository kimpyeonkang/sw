#include <stdio.h>

void my_strlen(char* p);

int main() {
	char s[] = "Hello";  
	char* p;
	p = s;  
	printf("����� ���ڿ� = %s\n", s);  
	my_strlen(p);
	return 0;
}

void my_strlen(char* p) {
	int i;
	for (i = 0; p[i] != '\0'; i++) {  // ������ for ������ ����
		// �� ���� ����; ���ڿ��� ���� �� ���
	}
	printf("���ڿ��� ���� = %d\n", i);  // ���� �ܺη� �̵���
}