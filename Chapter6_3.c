#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand((unsigned)time(NULL));
	int computer = rand() % 3 + 1;
	int user;
	printf("(1:���� 2:���� 3:��) �߿��� �ϳ��� �����Ͻÿ�: ");
	scanf_s("%d", &user);
	printf("��ǻ�ʹ� %d�� �����Ͽ����ϴ�.", computer);
	if (user == 1 && computer == 2)
		printf("��ǻ�Ͱ� �̰���ϴ�.\n");
	else if (user == 1 && computer == 3)
		printf("����ڰ� �̰���ϴ�.\n");
	else if (user == 2 && computer == 1)
		printf("����ڰ� �̰���ϴ�.\n");
	else if (user == 2 && computer == 3)
		printf("��ǻ�Ͱ� �̰���ϴ�.\n");
	else if (user == 3 && computer == 1)
		printf("��ǻ�Ͱ� �̰���ϴ�.\n");
	else if (user == 3 && computer == 2)
		printf("����ڰ� �̰���ϴ�.\n");
	else
		printf("�����ϴ�.\n");


	return 0;
}