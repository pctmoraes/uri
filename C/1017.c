#include <stdio.h>

int main()
{
    int tempo, velocidade;
    float combustivel;
    scanf("%i%i", &tempo, &velocidade);
    combustivel = (tempo * velocidade) / 12.0;
    printf("%.3f\n", combustivel);
    return 0;
}