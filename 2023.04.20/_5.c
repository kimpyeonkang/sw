#include <stdio.h>

int main(void)
{
    int i, n;

    printf("������ �Է��Ͻÿ�: ");
    scanf_s("%d", &i);
    do {
        n = i % 10;
        i /= 10;
        printf("%d", n);
    } while (i != 0);
    return 0;
}