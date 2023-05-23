#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printmenu() {
	printf("'c' 센치미터에서 인치로 변환\n");
	printf("'i' 인치에서 센치미터로 변환\n");
	printf("'m' 마일에서 야드로 변환\n");
	printf("'y' 야드에서 마일로 변환\n");
	printf("'q' 종료\n");
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
		printf("메뉴에서 선택하세요: ");
		choice = getchar();
		if (choice == 'q') break;
		else if (choice == 'c') {
			printf("센치미터: ");
			scanf_s("%lf", &length);
			printf("인치: %lf\n", c2i(length));
		}
		else if (choice == 'i') {
			printf("인치: ");
			scanf_s("%lf", &length);
			printf("센치미터: %lf\n", i2c(length));
		}
		else if (choice == 'm') {
			printf("마일: ");
			scanf_s("%lf", &length);
			printf("야드: %lf\n", m2y(length));
		}
		else if (choice == 'y') {
			printf("야드: ");
			scanf_s("%lf", &length);
			printf("마일: %lf\n", y2m(length));
		}
	}getchar();
	return 0;
}