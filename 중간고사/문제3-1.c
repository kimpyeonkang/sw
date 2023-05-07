#include <stdio.h>

int main(void)
{
    printf(“%x\n”, 0x20 << 2);

    return 0;
}// 0x20은 0010 0000(20), 시프트 연산 1000 0000(80) 출력 = 80
