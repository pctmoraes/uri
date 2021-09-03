#include <stdio.h>

int main()
{
    float A[100];
    int B[100], i, j = 0, cont = 0;
    
    for (i = 0; i < 100; i++){
        scanf("%f", &A[i]);
        if (A[i] <= 10.0){
            B[j] = i;
            j++;
        }
    }

    for (i = 0; i < j; i++){
        printf("A[%d] = %.1f\n", B[i], A[B[i]]);
    }
    
    return 0;
}