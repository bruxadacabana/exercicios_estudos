/*
	FAETERJ-Rio
	FPR - Fundamentos de Programação - Noite
	Professor Leonardo Vianna
	
	Prova a compor a AV1 - 08/05/2023
	
	Questão 03 [2,5 pontos]:
	Considere a existência de um vetor de structs com quant posições, onde cada uma destas armazena os 
	seguintes dados sobre um grupo de pessoas: nome (string), gênero (char) e idade (int). Pede-se uma função 
	que determine se os elementos deste vetor estão ordenados e retorne 1, caso estejam ordenados, e 0, 
	caso contrário.

	Observação: o vetor será considerado ordenado se estiver organizado crescentemente em função da 
	idade. Porém, no caso de pessoas com a mesma idade, estas devem estar ordenadas crescentemente pelo nome. 
*/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

#define QUANT 4

//definição de tipos
typedef struct {
	char nome[50];
	char genero;
	int idade;
}TPessoas;

//protótipos das funções
int verifica(TPessoas grupo[QUANT]);

//main
void main ()
{
	//declaração de variáveis
	TPessoas vetPessoas[QUANT];
	int retorno;
	
	//inicializando o vetor vetPessoas1
	strcpy (vetPessoas[0].nome, "JOAO");
	vetPessoas[0].genero = 'M';
	vetPessoas[0].idade = 21;
	
	strcpy (vetPessoas[1].nome, "LANA");
	vetPessoas[1].genero = 'F';
	vetPessoas[1].idade = 30;
	
	strcpy (vetPessoas[2].nome, "JULIA");
	vetPessoas[2].genero = 'M';
	vetPessoas[2].idade = 30;
	
	strcpy (vetPessoas[3].nome, "PEDRO");
	vetPessoas[3].genero = 'M';
	vetPessoas[3].idade = 35;
		
	//chamando a função e armazenando o retorno na variável 'retorno'
	retorno = verifica(vetPessoas);
	
	//testando o retorno
	if (retorno == 1)
	{
		printf ("\nOs dados do vetor estao ordenados!");
	}
	else
	{
		printf ("\nOs dados do vetor NAO estao ordenados!");
	}
}
	
//implementação das funções
int verifica(TPessoas grupo[QUANT]){
	int i;
	
	for (i=0; i < QUANT; i++){
		if (grupo[i].idade > grupo[i+1].idade){
			return 0;
		}
		if (grupo[i].idade == grupo[i+1].idade){
			if (grupo[i].nome < grupo[i+1].nome){
				return 0;
			}
		}
	}
	return 1;
}
