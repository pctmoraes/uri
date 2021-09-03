#include <stdio.h>

int main()
{
    int teta[20], tetb[20], i, tam = 19;
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &teta[i]);
    }
    for (i = 0; i < 20; i++)
    {
        tetb[tam] = teta[i];
        tam--;
    }
    for (i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, tetb[i]);
    }

    return 0;
}
