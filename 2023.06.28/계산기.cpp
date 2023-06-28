#include <stdio.h>
int menu(void)
{
	int n;
	printf("1. 덧셈\n");
	printf("2. 뺄셈\n");
	printf("3. 곱셈\n");
	printf("4. 나눗셈\n");
	printf("5. 종료\n");
	scanf_s("%d", &n);
	return n;
}
void add()
{
	int x, y;
	printf("정수를 입력하시오: ");
	scanf_s("%d %d", &x, &y);
	printf("%d + %d= %d\n", x, y, x + y);
	
}
void sub()
{
	int x, y;
	printf("정수를 입력하시오: ");
	scanf_s("%d %d", &x, &y);
	printf("%d - %d= %d\n", x, y, x - y);
	
}
void mul()
{
	int x, y;
	printf("정수를 입력하시오: ");
	scanf_s("%d %d", &x, &y);
	printf("%d * %d= %d\n", x, y, x * y);
	
}
void div()
{
	int x, y;
	printf("정수를 입력하시오: ");
	scanf_s("%d %d", &x, &y);
	printf("%d / %d= %d\n", x, y, x / y);
}
	
int main(void)
{
	while (1) {
		switch (menu()) {
		case 1:
			add();
			break;
		case 2:
			sub();
			break;
		case 3:
			mul();
			break;
		case 4:
			div();
			break;
		case 5:
			printf("종료합니다.\n");
			return 0;
		default:
			break;
		}
	}
}