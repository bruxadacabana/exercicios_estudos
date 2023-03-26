/*
faça uma função que armazene em um vetor os 50 primeiros termos da seguinte sequencia: S = 1, 2, 4, 7, 11, 16...
observe que a diferença entre o 1º e 2º elementos é igual a 1, entre o 2º e 3º é igual a 2, entre e 3º e 4º é igual a 3 e assim sucessivamente.
*/

#include <stdio.h>

#define TAM 10

void funcao (int v[], int tam);
void exibirVet(int v[], int tam);

int main (){
    int vetor[TAM];

    funcao(vetor, TAM);

    exibirVet(vetor, TAM);

}

void funcao (int v[], int tam){
    int i;
    v[0] = 1;
    for (i=1; i <= 10; i++){
        v[i] = v[i-1] + i;
    }
}

void exibirVet(int v[], int tam){
    int i;
	printf ("\n\nElementos do vetor: ");
	for (i=0; i<tam; i++)
	{
		printf ("%d ", v[i]);
	}
}