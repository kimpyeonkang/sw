#include <stdio.h>

int main(void)
{
    int i, n;

    printf("정수를 입력하시오: ");
    scanf_s("%d", &i);
    do {
        n = i % 10;
        i /= 10;
        printf("%d", n);
    } while (i != 0);
    return 0;
}