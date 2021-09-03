#include <stdio.h>

int main()
{
    int vetor[10], i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    for (i = 0; i < 10; i++)
    {
        vetor[i] = (vetor[i] <= 0) ? 1 : vetor[i];
    }

    for (i = 0; i < 10; i++)
    {
        printf("X[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}