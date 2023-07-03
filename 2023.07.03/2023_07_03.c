#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int scores[20][3];
    int i, j;
    int tot = 0;
    double avg;
    double average[3] = { 0 };
    srand(time(NULL));

    
    for (i = 0; i < 20; i++)
        for (j = 0; j < 3; j++)
            scores[i][j] = rand() % 100;   

    
    for (i = 0; i < 20; i++)
    {
        tot = 0;
        printf("     %d¹øÂ° ÇÐ»ý: ", i + 1);
        for (j = 0; j < 3; j++)
        {
            printf("%9d", scores[i][j]);
            tot += scores[i][j];            
            average[j] += scores[i][j];     
        }
        avg = tot / 3.0;
        printf("   ÃÑÁ¡:%2d   Æò±Õ:%.2f \n", tot, avg);
    }
    for (i = 0; i < 3; i++)
        average[i] /= 20.0;                      

    puts("------------------------------------------------------------------------------");
    printf("°ú¸ñº° Æò±ÕÁ¡¼ö: ");
    for (i = 0; i < 3; i++)
        printf("\t%.1f", average[i]);          
    printf("\n");
}
