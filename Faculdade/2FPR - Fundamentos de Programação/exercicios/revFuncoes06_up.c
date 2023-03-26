/*
desenvolver uma função que, dada uma matriz m[15][20], determine se um numero X se encontra na linha L da matriz
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 15
#define C 20

int funcao (int m[L][C], int linha, int num);
void exibir (int m[L][C]);
void gerar (int m[L][C]);

void main (){
    int matriz[L][C], num, linha, resultado;

    gerar(matriz);
    exibir(matriz);

    printf("\n\nDigite qual numero voce deseja buscar: ");
    scanf("%d", &num);
    printf("Digite o numero da linha onde deseja realizar a busca (valor total: %d) \n: ",  (L-1));
    scanf("%d", &linha);

    resultado = funcao(matriz, linha, num);

    if (resultado == 0){
        printf("\nO numero nao esta nessa linha");
    } else{
        printf("\nO numero aparece %d vezes nessa linha", resultado);
    }
}

int funcao (int m[L][C], int linha, int num){
    int i, j;
    for (i=0, j=0; i<C; i++){
        if (m[linha][i] == num){
            j++;
        }
    }
    return j;
}

void exibir (int m[L][C]){
    int i, j;
	
	printf ("\n\nElementos da matriz:\n");
	for (i=0; i<L; i++)
	{
		for (j=0; j<C; j++)
		{
			printf ("%d ", m[i][j]);
		}
		
		printf ("\n");
	}
}

void gerar (int m[L][C]){
    int i, j;
	
	srand(time(NULL));	
	for (i=0; i<L; i++)
	{
		for (j=0; j<C; j++)
		{
			m[i][j] = 1 + rand()%100;
		}
	}
}
