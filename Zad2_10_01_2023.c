#include <stdio.h>
#define N 10

void pary(int *array);
int main(void)
{
    int t[N] = {1, 12, -12, 24, 88, -30, 0, 18, -256, 1024};

    pary(t);

    return 0;
}

void pary(int *array)
{
    for (int i = 0; i < N - 1; i++)
    {
        printf("Liczby tworzące pary spełniające zał. zadania z t[%d] = %d\n", i, array[i]);
        for (int j = i + 1; j < N; j++)
        {
            if (array[i] > array[j])
            {
                printf("%d i %d\n", array[i], array[j]);
            }
        } 
        printf("\n");
    }
    
}