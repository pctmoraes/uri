#include <stdio.h>

int main()
{
    int numero, i;
    scanf("%d", &numero);

    for (i = 0; i < 12; i++){
        if ((numero + i) % 2 != 0)
            printf("%d\n", (numero+i));
    }
    
    return 0;
}