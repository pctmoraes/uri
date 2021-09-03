#include <stdio.h>

int main()
{
    int vetor[10], i;

    scanf("%d", &vetor[0]);
    if (vetor[0] <= 1000)
    {
        for (i = 1; i < 10; i++)
        {
            vetor[i] = vetor[i-1] * 2;
        }

        for (i = 0; i < 10; i++)
        {
            printf("N[%d] = %d\n", i, vetor[i]);
        }
    }

    return 0;
}