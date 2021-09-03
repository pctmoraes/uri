#include <stdio.h>

int main()
{
    int um = 0, zcinquenta = 0, zvinteCinco = 0, zdez = 0, zcinco = 0, zum = 0, dois = 0, cinco = 0, dez = 0, vinte = 0, cinquenta = 0, cem = 0;
    double valor;

    scanf("%lf", &valor);

    if (valor >= 100)
    {
        cem = valor / 100.0;
        valor = valor - (100.0 * cem);
    }
    if (valor < 100 && valor >= 50)
    {
        cinquenta = valor / 50.0;
        valor = valor - (50.0 * cinquenta);
    }
    if (valor < 50 && valor >= 20)
    {
        vinte = valor / 20.0;
        valor = valor - (20.0 * vinte);
    }
    if (valor < 20 && valor >= 10)
    {
        dez = valor / 10.0;
        valor = valor - (10.0 * dez);
    }
    if (valor < 10 && valor >= 5)
    {
        cinco = valor / 5.0;
        valor = valor - (5.0 * cinco);
    }
    if (valor < 5 && valor >= 2)
    {
        dois = valor / 2.0;
        valor = valor - (2.0 * dois);
    }
    if (valor < 2 && valor >= 1)
    {
        um = valor / 1.0;
        valor = valor - (1.0 * um);
    }   
    if (valor < 1 && valor >= 0.5)
    {
        zcinquenta = 1;
        valor = valor - 0.50;
    }
    if (valor < 0.5 && valor >= 0.25)
    {
        zvinteCinco = 1;
        valor = valor - 0.25;
    }
    if (valor < 0.25 && valor >= 0.1)
    {
        zdez = valor / 0.10;
        valor = valor - (0.10 * zdez);
    }
    if (valor < 0.1 && valor >= 0.05)
    {
        zcinco = 1;
        valor = valor - 0.05;
    }
    if (valor < 0.05 && valor >= 0.01)
    {
        zum = valor / 0.01;
        valor = valor - (0.01 * zum);
    }
    if (valor > 0.0099)
    {
        zum = zum + 1;
    }

    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n", cem);
    printf("%i nota(s) de R$ 50.00\n", cinquenta);
    printf("%i nota(s) de R$ 20.00\n", vinte);
    printf("%i nota(s) de R$ 10.00\n", dez);
    printf("%i nota(s) de R$ 5.00\n", cinco);
    printf("%i nota(s) de R$ 2.00\n", dois);
    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n", um);
    printf("%i moeda(s) de R$ 0.50\n", zcinquenta);
    printf("%i moeda(s) de R$ 0.25\n", zvinteCinco);
    printf("%i moeda(s) de R$ 0.10\n", zdez);
    printf("%i moeda(s) de R$ 0.05\n", zcinco);
    printf("%i moeda(s) de R$ 0.01\n", zum);
    
    return 0;
}