#include <stdio.h>

int main()
{
    int a, b, c, maior, meio, menor;
    scanf("%i%i%i", &a, &b, &c);

    if (a < b && a < c)
    {
        menor = a;
        if (b < c)
        {
            meio = b;
            maior = c;
        }
        else
        {
            meio = c;
            maior = b;
        }
        
    }
    if (b < a && b < c)
    {
        menor = b;
        if (a < c)
        {
            meio = a;
            maior = c;
        }
        else
        {
            meio = c;
            maior = a;
        }
        
    }
    if (c < b && c < a)
    {
        menor = c;
        if (b < a)
        {
            meio = b;
            maior = a;  
        }
        else
        {
            meio = a;
            maior = b;
        }
        
    }
    printf("%i\n%i\n%i\n\n", menor, meio, maior);
    printf("%i\n%i\n%i\n", a, b, c);
    
    return 0;
}