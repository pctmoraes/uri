#include <stdio.h>
#include <string.h>

int main()
{
    char palavra1[20], palavra2[20], palavra3[20];
    int nivel1, nivel2, nivel3;
    gets(palavra1);
    gets(palavra2);
    gets(palavra3);    
    if (nivel1 = strcmp(palavra1, "vertebrado") == 0){ // vertebrado
        if (nivel2 = strcmp(palavra2, "ave") == 0){ // ave
            if (nivel3 = strcmp(palavra3, "carnivoro") == 0) // carnivoro
                printf("aguia\n");
            else // onivoro
                printf("pomba\n");
        }
        else{ // mamifero
            if (nivel3 = strcmp(palavra3, "onivoro") == 0) // onivoro
                printf("homem\n");
            else // herbivoro
                printf("vaca\n");
        }   
    }
    else{ // invertebrado 
        if (nivel2 = strcmp(palavra2, "inseto") == 0){ // inseto
            if (nivel3 = strcmp(palavra3, "hematofago") == 0) // hematofago
                printf("pulga\n");
            else // herbivoro
                printf("lagarta\n");   
        }
        else{ // anelideo
            if (nivel3 = strcmp(palavra3, "hematofago") == 0) // hematofago
                printf("sanguessuga\n");
            else // onivoro
                printf("minhoca\n");
        } 
    }

    return 0;
}