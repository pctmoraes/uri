#include <stdio.h>

int main()
{
    int numero[5], i; 
    int qdtPares = 0, qtdImpares = 0, qtdPositivos = 0, qtdNegativos = 0;
    
    for(i = 0; i < 5; i++){
        scanf("%d", &numero[i]);
        if (numero[i] % 2 == 0)
            qdtPares++;
        if (numero[i] % 2 != 0)
            qtdImpares++;
        if (numero[i] > 0)
            qtdPositivos++;
        if (numero[i] < 0)
            qtdNegativos++;
    }
    printf("%d valor(es) par(es)\n", qdtPares);
    printf("%d valor(es) impar(es)\n", qtdImpares);
    printf("%d valor(es) positivo(s)\n", qtdPositivos);
    printf("%d valor(es) negativo(s)\n", qtdNegativos);
    return 0;
}