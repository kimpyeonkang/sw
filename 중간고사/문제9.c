#include <stdio.h>
int main(void)
{
    int num, tot = 0;
    do {

        printf("���� �Է� : ��);

        scanf_s("%d��, &num);

        tot += num;

    } while (num != 0);

    printf("total = %d\n", tot);
   
    return 0;
}
/*���� ��� 
    �����Է� : 5
    �����Է� : 7
    �����Է� : 2
    �����Է� : 0
    total = 14
*/