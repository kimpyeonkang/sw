#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice();
int roll_dice() {
	return (rand() % 6) + 1;
}
int main(void)
{
	int user_total = 0, computer_total = 0;
	srand(time(NULL));
	for (int i = 0; i < 3; i++) {
		user_total += roll_dice();
		computer_total += roll_dice();
	}
	printf("����� �ֻ���=%d\n", user_total);
	printf("��ǻ�� �ֻ���=%d\n",computer_total);

	if (user_total > computer_total)
		printf("����� �¸�");
	else if (user_total < computer_total)
		printf("��ǻ�� �¸�");
	else
		printf("���º�");
	return 0;
}