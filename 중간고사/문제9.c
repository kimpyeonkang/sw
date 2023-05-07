#include <stdio.h>
int main(void)
{
    int num, tot = 0;
    do {

        printf("정수 입력 : ”);

        scanf_s("%d”, &num);

        tot += num;

    } while (num != 0);

    printf("total = %d\n", tot);
   
    return 0;
}
/*예를 들어 
    정수입력 : 5
    정수입력 : 7
    정수입력 : 2
    정수입력 : 0
    total = 14
*/