#include <stdio.h>

int main()
{
    int tempo, horas = 0, minutos = 0, segundos = 0;
    
    scanf("%i", &tempo);

    if (tempo >= 3600)
    {
        horas = tempo / 3600;
        minutos = (tempo - (3600 * horas)) / 60;
        segundos = (tempo - (3600 * horas)) - (60 * minutos);
    }
    else if (tempo < 3600 && tempo >= 60)
    {
        minutos = tempo / 60;
        segundos = tempo - (60 * minutos);
    }
    else if (tempo < 60)
    {
        segundos = tempo;
    }

    printf("%i:%i:%i\n", horas, minutos, segundos);

    return 0;
}