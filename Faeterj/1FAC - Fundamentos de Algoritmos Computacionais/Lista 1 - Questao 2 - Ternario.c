#include<stdio.h>

/* QUESTÃO 02: Elabore um algoritmo que, dada a idade de um nadador, 
classifique-o em uma das seguintes categorias:  
 
Categoria  	Faixa de idade 
Infantil A  0 - 4 anos 
Infantil B  5 - 7 anos 
Infantil C  8-10 anos 
Juvenil A   11-13 anos 
Juvenil B   14-17 anos 
Adulto      18 anos ou mais */

int main ()
{
	//Declaração de variáveis
	int i;
	
	//Obter dados
	printf("Insira a idade do nadador");
	scanf("%d",&i);

	//Exibir resultados de acordo com as condições impostas no problema
	printf((i<=4)?"Infantil A":(i<=7)?"Infantil B":(i<=10)?"Infantil C":(i<=13)?"Juvenil A":(i<=17)?"Juvenil B":"Adulto");

}

