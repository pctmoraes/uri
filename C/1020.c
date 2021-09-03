#include <stdio.h>

int main()
{
    int valor, ano = 0, mes = 0, dia = 0;

    scanf("%i", &valor);

    ano = valor / 365;
    mes = (valor - (365 * ano)) / 30;
    dia = (valor - (365 * ano)) - mes * 30;

    printf("%i ano(s)\n", ano);
    printf("%i mes(es)\n", mes);
    printf("%i dia(s)\n", dia);

    return 0;
}