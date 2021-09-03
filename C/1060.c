#include <stdio.h>

int main()
{
    int matriz[10], i, quantiadadePositivos = 0;

    for (i = 0;i < 6; i++)
        scanf("%d", &matriz[i]);
    
    for (i = 0;i < 6; i++)
    {
        if (matriz[i] > 0)
            quantiadadePositivos++;
    }

    printf("%d valores positivos\n", quantiadadePositivos);

    return 0;
}