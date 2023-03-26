/*
VETORES
desenvolver uma funcao que determine o numero de ocorrencias de um numero inteiro x em um vetor A
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int funcao (int v[], int tam){
    int i, j = 0;
    for(i=0; i<tam; i++){
        if (v[i] == 5){
            j++;
        }
    }
    return j;
}

int main (){
    int oc;
    int vetor[5] = {5, 2, 3, 4, 5};

    oc = funcao(vetor, 5);

    printf("Total de ocorrencias: %d", oc);

    return 0;
}