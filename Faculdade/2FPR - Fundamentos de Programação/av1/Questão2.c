/*
	FAETERJ-Rio
	FPR - Fundamentos de Programação - Noite
	Professor Leonardo Vianna
	
	Prova a compor a AV1 - 08/05/2023
	
	Questão 02 [2,5 pontos]:
	Dadas duas strings s1 e s2, implementar uma função que verifique se todos os caracteres de s1 estão em s2. 
	Dependendo do resultado, os seguintes valores deverão ser retornados:
	
		0:	nem todos os caracteres de s1 estão em s2;
		1:	todos os caracteres de s1 estão em s2, porém não na mesma frequência;
		2:	todos os caracteres de s1 estão em s2, na mesma frequência.
*/

//importação de bibliotecas
#include <stdio.h>


//protótipos das funções
int comparacao (char s1[], char s2[]);
int tamanho (char s[]);

//main
void main (){
	//declaração de variáveis
	char string1[20], string2[20];
	int retorno;
	
	//obtendo as duas strings
	printf ("Primeira string: ");
	fflush (stdin);
	gets (string1);
	
	printf ("\nSegunda string: ");
	fflush (stdin);
	gets (string2);
	
	//chamando a função e armazenando o retorno na variável 'retorno'
	retorno = comparacao(string1, string2);
	
	//testando o retorno
	switch (retorno)
	{
		case 0: printf ("\nNem todos os caracteres de %s estao em %s.\n", string1, string2);
		        break;
		        
		case 1: printf ("\nTodos os caracteres de %s estao em %s, porem nao na mesma frequencia.\n", string1, string2);
		        break;
		        
		case 2: printf ("\nTodos os caracteres de %s estao em %s e na mesma frequencia.\n", string1, string2);
		        break;
	}
}
	
//implementação das funções
int comparacao (char s1[], char s2[]){
	int i, j, cti=0, tam;
  
	for (i=0; (s1[i] != '\0') || (s2[i] != '\0'); i++){
		for (j=0; (s1[j] != '\0') || (s2[j] != '\0'); j++){
	      if (s1[i] == s2[j]){
	        cti++;
	      }
    	}
	}
  
  tam = tamanho(s1);
  
  if (cti < tam){
    return 0;
  }
  
  if (cti > tam){
    return 1;
  }
  
  if (cti == tam){
    return 2;
  }
}

int tamanho (char s[]){
  int i, j, ct=0;
  /*for (i=0; s[i] != '\0'; i++){
    ct++;
  }*/
  
  for (i=0; s[i] != '\0'; i++){
    for (j=0; s[j] != '\0'; j++){
      if (s[j] != s[i]){
        ct = ct + 1;
      }
    }
  }
  printf("quantidade de caracteres diferentes em s1: %d\n\n", ct);
  return ct;
}
