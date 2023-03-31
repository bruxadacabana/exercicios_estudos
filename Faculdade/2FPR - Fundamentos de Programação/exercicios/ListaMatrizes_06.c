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
int totalAno (int m[MESES][FUNCS]);
int totalMes (int m[MESES][FUNCS], int mes);
int funcANo (int m[MESES][FUNCS], int func);
int mesMaV (int m[MESES][FUNCS]);

void main (){
    int vendas[MESES][FUNCS], op = 0, sel = 0;

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
            printf("\n\nO total vendido nesse ano foi R$ %d!", totalAno(vendas));
            break;
        case 2:
            printf("\n\nDigite (numero do) mês você gostaria de obter o total: ");
            scanf("%d", &sel);
            printf("\nO total de vendas desse mês foi %d!", totalMes(vendas, (sel-1)));
            break;
        case 3:
            printf("\n\nDigite o ID do funcionario do qual deseja saber o valor: ");
            scanf("%d", &sel);
            printf("\nO total de vendas desse mês foi %d!", totalMes(vendas, sel));
            break;
        case 4:
            printf("\n\nO mês com maior venda foi o %d!", mesMaV(vendas) + 1);
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
			m[i][j] = 1 + rand()%1000;
		}
	}
}

int totalAno (int m[MESES][FUNCS]){
    // Calcular o total vendido durante o ano;
    int i, j, soma=0;

    for (i=0; i<MESES; i++){
        for (j=0; j<FUNCS; j++){
            soma = soma + m[i][j];
        }
    }
    return soma;
}

int totalMes (int m[MESES][FUNCS], int mes){
    // Dado um mês fornecido pelo usuário, determinar o total vendido nesse mês;
    int i, soma = 0;
    for (i=0; i<FUNCS; i++){
        soma = soma + m[mes][i];
    }
    return soma;
}

int funcANo (int m[MESES][FUNCS], int func){
    // Dado um funcionário fornecido pelo usuário, determinar o total vendido por ele durante o ano;
    int i, soma = 0;
    for (i=0; i<MESES; i++){
        soma = soma + m[i][func];
    }
    return soma;
}

int mesMaV (int m[MESES][FUNCS]){
    // Determinar o mês com maior índice de vendas
    int i, j, comp = 0, mes = 0, id;
    for (j=0; j<MESES; j++){
        for (i=0; i<FUNCS; i++){
            comp = comp + m[j][i];
        }
        if (comp > mes){
            mes = comp;
            id = j;
        }
        comp = 0;
    }
    return id;
}

int funcMeV (int m[MESES][FUNCS]){
    // Determinar o funcionário que menos vendeu durante o ano
    int i, j, comp = 0, mes = 0, id;
    for (i=0; i<FUNCS; i++){
        for (j=0; j<MESES; j++){
            comp = comp + m[j][i];
        }
        if (comp < mes){
            mes = comp;
            id = i;
        }
        comp = 0;
    }
    return id;
}