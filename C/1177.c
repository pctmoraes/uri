#include <stdio.h>

int main()
{
    int n[1000], i, j = 0, t;

    scanf("%d", &t);
    
    if (t >= 2 && t <= 50)
    {
        for (i = 0; i < 1000; i++)
        {
            if (j == t)
            {
                j = 0;
                n[i] = j;
                j++;
            }
            else
            {
                n[i] = j;
                j++;
            }
        }
    
        for (i = 0; i < 1000; i++)
        {
            printf("N[%d] = %d\n", i, n[i]);
        }
    }
    return 0;
}