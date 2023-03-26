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
    printf("Digite o numero da linha onde deseja realizar a busca: ");
    printf("\nvalor total: %d \n", (C-1));
    scanf("%d", &linha);

    resultado = funcao(matriz, num, linha);

    if (resultado == 1){
        printf("\nO numero esta nessa linha");
    } else{
        printf("\nO numero nao esta nessa linha");
    }
}

int funcao (int m[L][C], int linha, int num){
    int i;
    for (i=0; i<=C; i++){
        if (m[linha][i] == num){
            return 1;
        }
    }
    return 0;
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
