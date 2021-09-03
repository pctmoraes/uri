#include <stdio.h>

int main()
{
    int a, b, c, d, DIFERENCA;
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    scanf("%i", &d);
    DIFERENCA = (a * b - c * d);
    printf("DIFERENCA = %i\n", DIFERENCA);
    return 0;
}