#include <stdio.h>

int main(void)
{
    printf(��%x\n��, 0x20 << 2);

    return 0;
}// 0x20�� 0010 0000(20), ����Ʈ ���� 1000 0000(80) ��� = 80
