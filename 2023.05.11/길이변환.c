#include<stdio.h>

void printmeun()
{
	printf("1. in�� cm�� ��ȯ: \n");
	printf("2. cm�� in�� ��ȯ: \n");
}


double in_to_cm(double i_c)
{
	return i_c * 2.54;
}

double cm_to_in(double c_i)
{
	return c_i * 0.393701;
}


int main(void) {

	double a;
	int choice;

	printmeun();
	printf("��ȣ�� �Է��ϼ���:");
	scanf_s("%d", &choice);



	switch (choice)
	{

	case 1:
		printf("in: ");
		scanf_s("%lf", &a);
		printf("%lf", in_to_cm(a));
		break;
	case 2:
		printf("cm: ");
		scanf_s("%lf", &a);
		printf("%lf", cm_to_in(a));
		break;
	}

	return 0;

}