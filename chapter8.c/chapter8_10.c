#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int b_rand() {
    return rand() % 2;
}

int main(void) {
    int com, user;
    char input;

    srand(time(NULL));
    while (1) {
        com = b_rand();
        printf("�ո� �Ǵ� �޸�(1 �Ǵ� 0):");
        scanf_s("%d", &user);

        if (com == user)
            printf("�¾ҽ��ϴ�.\n");
        else
            printf("Ʋ�Ƚ��ϴ�.\n");

        printf("����Ͻðڽ��ϱ�?(y �Ǵ� n):");
        scanf_s(" %c", &input);

        if (input == 'y')
            continue;
        else
            break;
    }
    return 0;
}