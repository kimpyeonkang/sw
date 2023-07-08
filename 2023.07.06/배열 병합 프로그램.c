#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 10

void print_arry1(int arry1[size])    //배열 출력함수
{
    int i;
    printf("정렬 전 arry1[50]= ");
    for (i = 0; i < size; i++)
        printf("%3d ", arry1[i]);
}

void print_arry2(int arry2[size])    //배열 출력함수
{
    int i;
    printf("\n\n정렬 전 arry2[50]= ");
    for (i = 0; i < size; i++)
        printf("%3d ", arry2[i]);
}

void rand_arry1(int arry1[size])    //난수생성 함수
{
    int i;
    for (i = 0; i < size; i++) {
        arry1[i] = rand() % 100;
    }
}

void rand_arry2(int arry2[size])    //난수생성 함수
{
    int i;
    for (i = 0; i < size; i++) {
        arry2[i] = rand() % 100;
    }
}

void sort_arry1(int arry1[size])    //정렬함수
{
    int i, j = 0, temp, least = 0;
    printf("\n\n정렬 후 arry1[10]=");
    for (i = 0; i < size - 1; i++) {
        least = i;
        for (j = i + 1; j < size; j++)
            if (arry1[j] < arry1[least])
                least = j;
        temp = arry1[i];
        arry1[i] = arry1[least];
        arry1[least] = temp;
    }

    for (i = 0; i < size; i++)
        printf("%3d", arry1[i]);
    printf("\n\n");
}

void sort_arry2(int arry2[size])    //정렬함수
{
    int i, j = 0, temp, least = 0;
    printf("정렬 후 arry2[10]=");
    for (i = 0; i < size - 1; i++) {
        least = i;
        for (j = i + 1; j < size; j++)
            if (arry2[j] < arry2[least])
                least = j;
        temp = arry2[i];
        arry2[i] = arry2[least];
        arry2[least] = temp;
    }

    for (i = 0; i < size; i++)
        printf("%3d", arry2[i]);
    printf("\n");
}

void merge_arry3(int *arry1, int* arry2, int* arry3)    //병합함수
{
    int i = 0, j = 0, k = 0;
    for (i = 0; i < size && j < size;)
    {
        if (arry1[i] < arry2[j])
        {
            arry3[k] = arry1[i];
            k++;
            i++;
        }
        else
        {
            arry3[k] = arry2[j];
            k++;
            j++;
        }
    }
    while (i < size)
    {
        arry3[k] = arry1[i];
        k++;
        i++;
    }
    while (j < size)
    {
        arry3[k] = arry2[j];
        k++;
        j++;
    }

    printf("\n합쳐진 배열 요소 : ");
    for (i = 0; i < 2 * size; i++)
    {
        printf("%d ", arry3[i]);
    }
    printf("\n");
}

int main()
{
    srand((unsigned)time(NULL));
    int arry1[size] = { 0 };
    int arry2[size] = { 0 };
    int arry3[20] = { 0 };

    rand_arry1(arry1);
    rand_arry2(arry2);
    print_arry1(arry1);
    print_arry2(arry2);
    sort_arry1(arry1);
    sort_arry2(arry2);
    merge_arry3(arry1, arry2, arry3);
    
    return 0;
}
