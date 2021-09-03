#include <stdio.h>

int main()
{
    int valorOriginal, valor, um = 0, dois = 0, cinco = 0, dez = 0, vinte = 0, cinquenta = 0, cem = 0;

    scanf("%i", &valorOriginal);

    valor = valorOriginal;

    if (valor >= 100)
    {
        cem = valor / 100;
        valor = valor - (100 * cem);
    }
    if (valor < 100 && valor >= 50)
    {
        cinquenta = valor / 50;
        valor = valor - (50 * cinquenta);
    }
    if (valor < 50 && valor >= 20)
    {
        vinte = valor / 20;
        valor = valor - (20 * vinte);
    }
    if (valor < 20 && valor >= 10)
    {
        dez = valor / 10;
        valor = valor - (10 * dez);
    }
    if (valor < 10 && valor >= 5)
    {
        cinco = valor / 5;
        valor = valor - (5 * cinco);
    }
    if (valor < 5 && valor >= 2)
    {
        dois = valor / 2;
        valor = valor - (2 * dois);
    }
    if (valor < 2 && valor >= 1)
    {
        um = valor / 1;
        valor = valor - (1 * um);
    }
    
    printf("%i\n", valorOriginal);
    printf("%i nota(s) de R$ 100,00\n", cem);
    printf("%i nota(s) de R$ 50,00\n", cinquenta);
    printf("%i nota(s) de R$ 20,00\n", vinte);
    printf("%i nota(s) de R$ 10,00\n", dez);
    printf("%i nota(s) de R$ 5,00\n", cinco);
    printf("%i nota(s) de R$ 2,00\n", dois);
    printf("%i nota(s) de R$ 1,00\n", um);

    return 0;
}