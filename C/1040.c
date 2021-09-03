#include <stdio.h>

int main()
{
    float notaUm, notaDois, notaTres, notaQuatro, media, exame = 0;
    scanf("%f%f%f%f", &notaUm, &notaDois, &notaTres, &notaQuatro);

    media = (notaUm * 2 + notaDois * 3 + notaTres * 4 + notaQuatro * 1) / 10;

    printf("Media: %.1f\n", media);

    if (media >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (media < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);
        media = (media + exame) / 2.0;

        if (media >= 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
        
        printf("Media final: %.1f\n", media); 
    }
    
    return 0;
}