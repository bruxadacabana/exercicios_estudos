/*

*/

#include <stdio.h>

#define TAM 5

void funcao (int m[TAM][TAM]);
void exibir (int matriz[TAM][TAM]);

int main (){

    int m[TAM][TAM];

    funcao(m);

    exibir (m);

}

void funcao (int m[TAM][TAM]){
    int i, j;

    for (i=0; i <= TAM; i++){
        for (j=0; j <= TAM; j++){
            m[i][j] = i + 1 + j;
        }
    }

}

void exibir (int matriz[TAM][TAM]){
	int i, j;
	
	printf ("\n\nElementos da matriz:\n");
	for (i=0; i<TAM; i++)
	{
		for (j=0; j<TAM; j++)
		{
			printf ("%d ", matriz[i][j]);
		}
		
		printf ("\n");
	}
}