#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, n;

    printf("몇번째 항까지 구할까요? ");
    scanf_s("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}