#include <stdio.h>
int power(int base, int power_raised) {
	if (power_raised !=  1)
		return base * power(base, power_raised-1);
	else
		return base;
}
int main(void)
{
	int base, power_raised, result;
	printf("�ؼ�: ");
	scanf_s("%d", &base);
	printf("����: ");
	scanf_s("%d", &power_raised);
	result = power(base, power_raised);

	printf("%d^%d = %d\n", base, power_raised, result);  //result���ְ� power(base,power_raised)�� ����
	return 0;
}
