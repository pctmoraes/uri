#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double r1 = 0, r2 = 0, delta;
    scanf("%lf%lf%lf", &a, &b, &c);    

    delta = (b*b-4*a*c);
    if (a != 0.0 && delta > 0.0)
    {
        delta = pow(delta, 0.5);
        r1 = (-b+delta)/(2*a);
        r2 = (-b-delta)/(2*a);
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}