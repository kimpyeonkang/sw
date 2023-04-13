#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand((unsigned)time(NULL));
	int computer = rand() % 3 + 1;
	int user;
	printf("(1:가위 2:바위 3:보) 중에서 하나를 선택하시오: ");
	scanf_s("%d", &user);
	printf("컴퓨터는 %d를 선택하였습니다.", computer);
	if (user == 1 && computer == 2)
		printf("컴퓨터가 이겼습니다.\n");
	else if (user == 1 && computer == 3)
		printf("사용자가 이겼습니다.\n");
	else if (user == 2 && computer == 1)
		printf("사용자가 이겼습니다.\n");
	else if (user == 2 && computer == 3)
		printf("컴퓨터가 이겼습니다.\n");
	else if (user == 3 && computer == 1)
		printf("컴퓨터가 이겼습니다.\n");
	else if (user == 3 && computer == 2)
		printf("사용자가 이겼습니다.\n");
	else
		printf("비겼습니다.\n");


	return 0;
}