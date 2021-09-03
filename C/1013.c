#include <stdio.h>
#include<stdlib.h>

int main()
{   
    int a, b, c;
    int maiorAB, maiorABC;
    scanf("%i%i%i", &a, &b, &c);
    maiorAB = ((a + b + abs(a - b))) / 2;
    maiorABC = ((maiorAB + c + abs(maiorAB - c))) / 2;
    printf("%i eh o maior\n", maiorABC);
    return 0;
}