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
	printf("밑수: ");
	scanf_s("%d", &base);
	printf("지수: ");
	scanf_s("%d", &power_raised);
	result = power(base, power_raised);

	printf("%d^%d = %d\n", base, power_raised, result);  //result없애고 power(base,power_raised)도 가능
	return 0;
}
