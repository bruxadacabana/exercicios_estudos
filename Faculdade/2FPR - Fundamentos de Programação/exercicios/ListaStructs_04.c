/*
Suponha a existência de um vetor de tamanho TAM, cada posição armazenando o nome da pessoa e a sua data de aniversário (representada por um struct do tipo TData, contendo os campos dia e mes). Pede-se o desenvolvimento das seguintes funções: 
    - Determinar a quantidade de pessoas que fazem aniversário no mês M;
    - Exibir os nomes de todas pessoas que fazem aniversário entre as datas d1 e d2, ambas do tipo TData.
*/

#include <stdio.h>
#include <string.h>

#define TAM 3

typedef struct {
    int dia, mes;
} TData;

typedef struct {
    char nome[50];
    TData aniversario;
} TPessoa;

int mensal (TPessoa agenda[TAM], int mes);
void aniversarios (TPessoa agenda[TAM], TData inicio, TData final);
void inserir (TPessoa agenda[TAM]);
void exibir (TPessoa agenda[TAM]);

void main(){
    TPessoa agenda[TAM];
    TData d1, d2;
    int mes, op=0;

    printf("Primeiro e necessario preencher a agenda!\n");

    inserir(agenda);

    while (op != 4){
        printf("\n\n--------------------------------------------");
        printf("\nO que voce deseja fazer?\n\n");
        printf("1 - Exibir agenda\n");
        printf("2 - Exibir quantidade de pessoas que fazem aniversario num mes\n");
        printf("3 - Exibir aniversariantes de um periodo\n");
        printf("4 - Sair\n");
        scanf("%d", &op);
        switch (op){
            case 1:
                exibir(agenda);
                break;
            case 2:
                printf("Qual mes voce deseja saber? ");
                scanf("%d", mes);
                printf("O total de pessoas que faz aniversario nesse mes e %d", mensal(agenda, mes));
                break;
            case 3:
                printf("Digite mes e ano a partir do qual deseja exibir (DD MM): ");
                scanf("%d %d", &d1.dia, &d1.mes);
                printf("Digite mes e ano até onde deseja exibir (DD MM): ");
                scanf("%d %d", &d2.dia, &d2.mes);
                break;
            case 4:
                printf("\nTudo bem, obrigada por usar nossos servicos!");
                break;
            default:
                printf("Comando invalido");
                break;
        }
    }
}

void exibir (TPessoa agenda[TAM]){
    int i;
    for (i=0; i<TAM; i++){
        printf("Nome: %s\nAniversario: %d/%d\n\n", agenda[i].nome, agenda[i].aniversario.dia, agenda[i].aniversario.mes);
    }
}

void inserir (TPessoa agenda[TAM]){
    int i;
    for (i=0; i<TAM; i++){
        printf("Digite o nome: ");
        gets(agenda[i].nome);
        printf("Digite o aniversario (DD MM): ");
        scanf("%d %d", &agenda[i].aniversario.dia, &agenda[i].aniversario.mes);
        printf("\n");
        fflush(stdin);
    }
}

int mensal (TPessoa agenda[TAM], int mes){
    // Determinar a quantidade de pessoas que fazem aniversário no mês M
    int i, cont;
    for (i=0, cont = 0; i < TAM; i++){
        if (agenda[i].aniversario.mes == mes){
            cont ++
        }
    }
    return cont;
}
void aniversarios (TPessoa agenda[TAM], TData inicio, TData final){
    // Exibir os nomes de todas pessoas que fazem aniversário entre as datas d1 e d2, ambas do tipo TData
    int i, j;
    if (inicio.mes == final.mes){
        for (i=inicio.dia; i<final.dia; i++){
            //printar nomes 
        } 
    } else {
        for (i=0; i<TAM; i++){ 
        }
    }
} 