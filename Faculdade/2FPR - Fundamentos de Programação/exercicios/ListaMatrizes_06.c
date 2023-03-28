/*
considere uma matriz m[12][10] (doze meses/10 funcionários) que armazena o total vendido por cada funcionário pelos meses do ano. Faça uma função para cada item?
- calcular o total vendido durante o ano
- dado um mês fornecido pelo usuário, determinar o total vendido desse mês
- dado um funcionário fornecido pelo usuario, determinar o total vendido por ele durante o ano
- determinar o mês com maior índice de vendas
- determinar o funcionário que menos vendeu durante o ano
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MESES 12
#define FUNCS 10

void exibir (int m[MESES][FUNCS]);
void gerar (int m[MESES][FUNCS]);
int calculo (int m[MESES][FUNCS]);

void main (){
    int vendas[MESES][FUNCS], op = 0;

    gerar(vendas);
    exibir(vendas);

    
    while (op != 6){
        printf("O que você deseja fazer?\n");
        printf("1 - Total vendido no ano\n");
        printf("2 - Total vendido num mês\n");
        printf("3 - Total vendido por um funcionário num ano\n");
        printf("4 - Ver mês com maior venda\n");
        printf("5 - Ver funcionário com menor venda no ano\n");
        printf("6 - Sair\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
            
            break;
        case 6:
            printf("Tudo bem, obrigada por usar nossos serviços!");
            break;
        default:
            printf("Comando invalido");
            break;
        }

    }

}



void exibir (int m[MESES][FUNCS]){
    int i, j;
	
	printf ("\n\nElementos da matriz:\n");
	for (i=0; i<MESES; i++)
	{
		for (j=0; j<FUNCS; j++)
		{
			printf ("%d ", m[i][j]);
		}
		
		printf ("\n");
	}
}

void gerar (int m[MESES][FUNCS]){
    int i, j;
	
	srand(time(NULL));	
	for (i=0; i<MESES; i++)
	{
		for (j=0; j<FUNCS; j++)
		{
			m[i][j] = 1 + rand()%100;
		}
	}
}