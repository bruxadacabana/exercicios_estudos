/*
VETORES
desenvolver uma funcao que determine o numero de ocorrencias de um numero inteiro x em um vetor A
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void exibirVet(int vetor[], int quant);
void gerarVet(int vetor[], int quant);
int funcao (int v[], int tam, int x);

int main (){
    int oc, item = 5;
    int vetor[TAM];

    gerarVet(vetor, TAM);
    exibirVet(vetor, TAM);


    oc = funcao(vetor, TAM, item);

    printf("Total de ocorrencias: %d", oc);

    return 0;
}

void gerarVet (int v[], int quant){
    int i;
	srand(time(NULL));	
	for (i=0; i<quant; i++)
	{
		v[i] = 1 + rand()%100;   //gerando números aleatórios no intervalo de 1 a 100
	}
}

void exibirVet (int v[], int quant){
    int i;
	printf ("\n\nElementos do vetor: ");
	for (i=0; i<quant; i++)
	{
		printf ("%d ", v[i]);
	}
}

int funcao (int v[], int tam, int x){
    int i, j = 0;
    for(i=0; i<tam; i++){
        if (v[i] == x){
            j++;
        }
    }
    return j;
}