#include <stdio.h>

int main()
{
    int numero, qdtPares = 0, i;
    for(i = 0; i < 5; i++){
        scanf("%d", &numero);
        if (numero % 2 == 0)
            qdtPares++;
    }
    printf("%d valores pares\n", qdtPares);
    return 0;
}