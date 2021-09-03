#include <stdio.h>

int main()
{   
    int distanciaEmKm;
    float combustivelConsumido;
    scanf("%i%f", &distanciaEmKm, &combustivelConsumido);
    printf("%.3f km/l\n", distanciaEmKm / combustivelConsumido);
    return 0;
}