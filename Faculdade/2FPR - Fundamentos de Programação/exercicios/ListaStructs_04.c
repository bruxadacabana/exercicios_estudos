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

int mensal (TPessoa agenda[TAM]);
void aniversarios (TPessoa agenda[TAM], int mesIn, int mesFi);
void inserir (TPessoa agenda[TAM]);
void exibir (TPessoa agenda[TAM]);

void main(){
    TPessoa agenda[TAM];
    int m1, m2, sec, op=0;

    printf("Primeiro e necessario preencher a agenda!\n");

    inserir(agenda);

    while (op =! 4){
        printf("\n\n--------------------------------------------");
        printf("\nO que voce deseja fazer?\n\n");
        printf("1 - Exibir agenda\n");
        printf("2 - Funcao 01\n");
        printf("3 - Funcao 02\n");
        printf("4 - Sair\n");
        scanf("%d", &op);
        switch (op){
            case 1:
                
                break;
            case 2:
                /* code */
                break;
            case 3:
                /* code */
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

int mensal (TPessoa agenda[TAM]){}
void aniversarios (TPessoa agenda[TAM], int mesIn, int mesFi){}

