/*
Dada uma matriz LINHAxCOLUNA, onde LINHA e COLUNA são constantes, e uma coluna C, desenvolver uma função que desloque todos os elementos da coluna C para a última coluna da matriz.
Consequentemente, as colunas C+1 à última deverão serão deslocadas uma posição para a esquerda.
*/

#include <stdio.h>

#define LINHA 5
#define COLUNA 5

int moverColuna(int m[LINHA][COLUNA], int c);
void exibir (int m[LINHA][COLUNA]);
void gerar (int m[LINHA][COLUNA]);
void copiarColuna(int c, int m[LINHA][COLUNA], int v[COLUNA]);

void main(){
    int c, resultado, matriz[LINHA][COLUNA];

    gerar(matriz);
    exibir(matriz);

    printf("\nDigite o indice da coluna a ser movida: ");
    scanf("%d", &c);

    resultado = moverColuna(matriz, c);

    if (resultado == 0){
        printf("A coluna digitada não existe.");
    } else{
        printf("Feito com sucesso! Segue matriz atualizada: \n");
        exibir(matriz);
    }
}

int moverColuna(int m[LINHA][COLUNA], int c){
    int i, vetor[COLUNA];

    if (c >= COLUNA){
        return 0;
    }

    copiarColuna(c, m, vetor)

    for(i=0; (i<COLUNA) && (); i++){
        
    }
}

void copiarColuna(int c, int m[LINHA][COLUNA], int v[COLUNA]){
    int i, j;
    for(i=0;i<COLUNA; i++){
        v[i] = m[i][COLUNA];
    }
}

void exibir (int m[LINHA][COLUNA]){
    int i, j;
	
	printf ("\n\nElementos da matriz:\n");
	for (i=0; i<LINHA; i++)
	{
		for (j=0; j<COLUNA; j++)
		{
			printf ("%d ", m[i][j]);
		}
		
		printf ("\n");
	}
}

void gerar (int m[LINHA][COLUNA]){
    int i, j;
	
	srand(time(NULL));	
	for (i=0; i<LINHA; i++)
	{
		for (j=0; j<COLUNA; j++)
		{
			m[i][j] = 1 + rand()%100;
		}
	}
}
