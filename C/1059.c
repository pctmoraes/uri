#include <stdio.h>

int main()
{
    int numero = 1;

    while (numero <= 100)
    {
        if (numero % 2 == 0)
        {
            printf("%i\n", numero);
        }
        numero++;
    }
    return 0;
}