#include <stdio.h>
#include <string.h>

typedef struct {
    float altura, peso;
    int idade;
} TPessoa;

typedef struct {
    int dia, mes, ano;
} TData;

typedef struct {
    char nome[50];
    int matricula;
    char genero;
    float CR;
    TData datadenascimento;
} TAluno;

void main(){
// declaração de variáveis
    TPessoa povo[10];
    TPessoa p1;
    TAluno turma[20];

// colocando valores nas variaveis
    printf("Altura: ");
    scanf("%f", &p1.altura);
    printf("Altura: ");
    scanf("%f", &p1.peso);
    printf("Altura: ");
    scanf("%d", &p1.idade);

// colocando itens no vetor
    for (i=0; i<10; i++){
        printf("Altura: ");
        scanf("%f", &povo[i].altura);
        printf("Altura: ");
        scanf("%f", &povo[i].peso);
        printf("Altura: ");
        scanf("%d", &povo[i].idade);
    }

/*
        ATRIBUIÇÃO  :
    p1.altura = povo[2].altura;
    p1.altura = povo[2].altura;
    p1.altura = povo[2].altura;

    ou, de forma melhor;
*/
    p1 = povo[2];    

// EXEMPLO DOIS (slides)
//vamos usar os tipos TAluno e TData com o vetor 'turma'

    for (i=0; i<20; i++){
        printf("Nome: ");
        fflush(stdin); //limpa o buffer - buffer guarda tudo o que foi digitado, incluindo o 'enter'
        gets(turma[i].nome);
        printf("Matricula: ");
        scanf("%d", turma[i].matricula);
        printf("Genero: ");
        fflush(stdin);
        scanf("%c", &turma[i].genero);
        printf("CR: ");
        scanf("%f", turma[i].CR);
        printf("Data de nascimento [DD MM AAAA]: ");
        scanf("%d %d %d", &turma[i].datadenascimento.dia, &turma[i].datadenascimento.mes, &turma[i].datadenascimento.ano);
    }  
}