#include <stdio.h>

int main()
{
    int numero, i;
    scanf("%i", &numero);

    for (i = 0; i <= numero; i++){
        if (i % 2 != 0)
            printf("%i\n", i);
    }
    return 0;
}