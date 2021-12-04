/*
Construir um algoritmo que calcule o peso ideal de uma pessoa, de acordo com o seu sexo e altura, utilizando as seguintes fórmulas: 
para homens: (72.7*h)-58 
para mulheres: (62.1*h)-44.7
*/

#include <stdio.h>

void main(){
	//obtendo os dados necessários
	char genero;
	float h, htotal;
	printf("Qual o  genero que deseja calcular?\n Use F para feminino e M para masculino! \n");
	scanf("%c", &genero);
	printf("Qual a altura da pessoa? (em m)\n");
	scanf("%f", &h);
	
	//hora de fazer os testes e calculos
	if (genero == 'F' || 'f'){
		htotal = (62.1*h)-44.7;
		printf("O peso ideal para o genero feminino e altura e de %.2fKg", htotal);
	} else{
		htotal = (72.7*h)-58 ;
		printf("O peso ideal para o genero masculino e altura e de %.2fKg", htotal);
	}
	
	/*
	tbm pode fazer com switch case
	além disso, tbm é possível acrescentar um "else if" e testar de o usuário digitou
	realmente M ou m, para o caso de terem digitado uma letra qualquer não relacionada.
	*/
}
