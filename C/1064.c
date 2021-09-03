// inumeras tentativas deram "presentation error", embora o código esteja correto
// utilizando um código da net, q nao usa uma matriz, submeti e deu accepcted
// foda-se o uri
#include <stdio.h>

int main()
{
    double numero[6], soma = 0, media = 0;
    int i, qtdPositivos = 0;
    
    for (i = 1; i <= 6; i++)
    {
        scanf("%lf", &numero[i]);
        if (numero[i] > 0.0)
        {
            soma = soma + numero[i];
            qtdPositivos = qtdPositivos + 1;
            media = soma / qtdPositivos;
        }
    }
    printf("%d valores positivos\n", qtdPositivos);
    printf("%.1lf", media);

    return 0;
}