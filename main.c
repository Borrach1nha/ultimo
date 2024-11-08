#include <stdio.h>
#include <stdlib.h>
#define TAM 3



int main()
{
    int i;

    //definindo vetores de varias formas
    int v1[3] = {0, 1, 2};
    float v2[3] = {0.5, 1.5, 2.5};
    char v3[TAM] = {'a', 'b', 'c'};

    //modificando valor por atribuição
    //v1[1] = 10;

    //modificando valor com variavel
    //float novoValor = 7.5;
    //v2[2] = novoValor;

    //modificando valor com usuario
    //printf("digite uma letra nova: ");
    //fflush(stdin);
    //scanf("%c",&v3[0]);

    //imprimindo vetores

    for(i = 0; i < 3; i++){
        printf("Vetores:%d\n", v1[i]);

    }
    for(i = 0; i < 3; i++){
        printf("Vetores float: %.2f\n", v2[i]);
    }
    for(i = 0; i < 3; i++){
        printf("Vetores char: %c\n", v3[i]);
    }

    return 0;
}
