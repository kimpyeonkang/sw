#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printmenu() {
	printf("'c' ��ġ���Ϳ��� ��ġ�� ��ȯ\n");
	printf("'i' ��ġ���� ��ġ���ͷ� ��ȯ\n");
	printf("'m' ���Ͽ��� �ߵ�� ��ȯ\n");
	printf("'y' �ߵ忡�� ���Ϸ� ��ȯ\n");
	printf("'q' ����\n");
}
double c2i(double c_length) {
	return c_length * 2.54;
}
double i2c(double i_length) {
	return i_length * 0.394;
}
double m2y(double m_length) {
	return m_length * 1760;
}
double y2m(double y_length) {
	return y_length * 0.000568;
}
int main() {
	char choice;
	double length;
	while (1) {
		printmenu();
		printf("�޴����� �����ϼ���: ");
		choice = getchar();
		if (choice == 'q') break;
		else if (choice == 'c') {
			printf("��ġ����: ");
			scanf_s("%lf", &length);
			printf("��ġ: %lf\n", c2i(length));
		}
		else if (choice == 'i') {
			printf("��ġ: ");
			scanf_s("%lf", &length);
			printf("��ġ����: %lf\n", i2c(length));
		}
		else if (choice == 'm') {
			printf("����: ");
			scanf_s("%lf", &length);
			printf("�ߵ�: %lf\n", m2y(length));
		}
		else if (choice == 'y') {
			printf("�ߵ�: ");
			scanf_s("%lf", &length);
			printf("����: %lf\n", y2m(length));
		}
	}getchar();
	return 0;
}