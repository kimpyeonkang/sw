#include <stdio.h>

int main(void)

{
   int a = 100, b = 200, c;

    c = (a == 100 || b > 200);

    printf("%d\n”, c);

    return 0;
} //논리연산으로 (a == 100)은 참, (b > 200)은 거짓이기 때문에 출력 = 1