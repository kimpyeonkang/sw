#include <stdio.h>
char check_alpha(char c);
char check_alpha(char c)
{
	if ((c >= 'a' && c < 'z') || (c >= 'A' && c < 'Z'))
		printf("%c�� ���ĺ� �����Դϴ�.", c);
	else
		printf("���ĺ� ���ڰ� �ƴմϴ�.");
}
int main(void)
{
	char c;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%c", &c);

	check_alpha(c);
	return 0;
}