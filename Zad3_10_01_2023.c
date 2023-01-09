#include <stdio.h>
#define N 8
#define K 15

void zamiana(int *p1, int *p2);
int main(void)
{
    int t_1[N] = {2, 18, -18, -20, -1, 55, 0, 223};
    int t_2[K] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    // Tablice przed zamianą
    /*
    for (int i = 0; i < N; i++)
    {
        printf("t_1[%d] = %d\n", i, t_1[i]);
    }
    printf("\n");
    for (int i = 0; i < K; i++)
    {
        printf("t_2[%d] = %d\n", i, t_2[i]);
    }
    printf("\n");
    */
    
    zamiana(t_1, t_2);
    
    // Tak o, napisane żeby se wyświetlało
    for (int i = 0; i < N; i++)
    {
        printf("t_1[%d] = %d\n", i, t_1[i]);
    }
    printf("\n");
    for (int i = 0; i < K; i++)
    {
        printf("t_2[%d] = %d\n", i, t_2[i]);
    }
    printf("\n");

    return 0;
}

void zamiana(int *p1, int *p2)
{
    for (int i = 0; i < N; i++)
    {
        if (p1[i] == 0)
        {
            p2[i] = p1[i];
            break;
        }
        p2[i] = p1[i];
    }   
}

