#include <stdio.h>

int main()
{
    double a, b, c, somaAB, somaBC, somaAC;
    scanf("%lf%lf%lf", &a, &b, &c);
    somaAB = a + b;
    somaBC = b + c;
    somaAC = a + c;
    if (somaAB > c && somaAC > b && somaBC > a)
        printf("Perimetro = %.1lf\n", (a + b + c));
    else
        printf("Area = %.1lf\n", ((c*(a + b)) / 2));    
    return 0;
}