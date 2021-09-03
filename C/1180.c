#include <stdio.h>

int main()
{
    int i, j, n = 0, aux = 0, menor = 0, pos = 0;

    scanf("%d", &n);
    
    int v[n], v2[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
        v2[i] = v[i];
    }

    
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (v[j] > v[j+1])
            {   
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }

    menor = v[0];

    for (i = 0; i < n; i++)
    {
        if (v2[i] == menor){
            pos = i;
            i = n;
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", menor, pos);
    
    return 0;
}