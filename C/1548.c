#include <stdio.h>

void main()
{
    int i, j, aux, posicao = 0, contador = 0;
    int numeroDeTestes;
    int tamanhoDaFila = 0;
    int fila[0];
    int numeroDeVezesNaoOrdenado[0];
    printf("\nDigite o numero de testes: ");
    scanf("%i", &numeroDeTestes);

    while (numeroDeTestes != 0)
    {
        printf("\nDigite o tamanho da fila: ");
        scanf("%i", &tamanhoDaFila);

        fila[tamanhoDaFila];

        for (i = 0; i < tamanhoDaFila; i++)
        {
            printf("\nDigite a nota %i: ", i+1);
            scanf("%d", &fila[i]);
        }
        for (i = 0; i < tamanhoDaFila; i++)
        {
            printf("\n%i", fila[i]);
        }
        numeroDeTestes--;
    }
    /*
    for (i = 0; i < tamanhoDaFila; i++)
    {
        printf("\n%i", fila[i]);
    }*/

    /*
    #pragma region WHILE BUGADO
    while (numeroDeTestes != 0)
    {
        printf("\nDigite o tamanho da fila: ");
        scanf("%i", &tamanhoDaFila);
        
        fila[tamanhoDaFila];
        numeroDeVezesNaoOrdenado[tamanhoDaFila];
        
        for (i = 0; i < tamanhoDaFila; i++)
        {
            printf("\nDigite a nota %i: ", i+1);
            scanf("%i", &fila[i]);
        }

        for (i = tamanhoDaFila - 1; i >= 1; i--)
        {
            for (j = 0; j < i; j++)
            {
                if (fila[j] > fila[j+1])
                {
                    aux = fila[j];
                    fila[j] = fila[j+1];
                    fila[j+1] = aux;
                    contador++;
                }
            }
        }
        numeroDeVezesNaoOrdenado[posicao] = tamanhoDaFila - contador;
        posicao++;
        numeroDeTestes--;
    }
    #pragma endregion
    
    for (i = 0; i < tamanhoDaFila; i++)
    {
        printf("\nNumero de vezes que nao foi ordenado no teste %i: %i", i+1, fila[i]);
    }
    */
}