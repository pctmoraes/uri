#include <stdio.h>
#include <string.h>

int main()
{
    char nome[100];
    float salario, valorvendas;
    gets(nome);
    scanf("%f%f", &salario, &valorvendas);
    printf("TOTAL = R$ %.2f\n", salario + (valorvendas * 0.15));
    return 0;
}