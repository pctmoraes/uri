#include <stdio.h>

int main()
{
    int num, horatrabalhada;
    float valorhora;
    scanf("%i%i%f", &num, &horatrabalhada, &valorhora);
    printf("NUMBER = %i\n", num);
    printf("SALARY = U$ %.2f\n", horatrabalhada * valorhora);
    return 0;
}