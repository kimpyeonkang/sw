#include <stdio.h>
char check_alpha(char c);
char check_alpha(char c)
{
	if ((c >= 'a' && c < 'z') || (c >= 'A' && c < 'Z'))
		printf("%c는 알파벳 문자입니다.", c);
	else
		printf("알파벳 문자가 아닙니다.");
}
int main(void)
{
	char c;
	printf("문자를 입력하시오: ");
	scanf_s("%c", &c);

	check_alpha(c);
	return 0;
}