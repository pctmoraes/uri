#include <stdio.h>

int main()
{   
    int peca1, peca2, numeropeca1, numeropeca2; 
    float valorunit1, valorunit2;
    scanf("%i%i%f", &peca1, &numeropeca1, &valorunit1);
    scanf("%i%i%f", &peca2, &numeropeca2, &valorunit2);
    printf("VALOR A PAGAR: R$ %.2f\n", (numeropeca1 * valorunit1) + (numeropeca2 * valorunit2));
    return 0;
}