#include <stdio.h>

void my_strlen(char* p);

int main() {
	char s[] = "Hello";  
	char* p;
	p = s;  
	printf("저장된 문자열 = %s\n", s);  
	my_strlen(p);
	return 0;
}

void my_strlen(char* p) {
	int i;
	for (i = 0; p[i] != '\0'; i++) {  // 여분의 for 루프를 제거
		// 빈 루프 본문; 문자열의 문자 수 계산
	}
	printf("문자열의 길이 = %d\n", i);  // 루프 외부로 이동됨
}