/*
Uma loja de automóveis mantém os carros à venda sob a forma de um vetor de structs contendo as seguintes informações, para cada veículo: placa, modelo, marca, cor, quilometragem, ano modelo/fabricação (deve ser um struct), valor e tipo (usado ou 0 km, conforme o valor do campo quilometragem). Pede-se a declaração de uma variável que represente o estoque de veículos da loja, incluindo todas as declarações de tipos que possam ser necessárias. Além disso, implementar as seguintes funções:
    i. Exibir todos os carros do modelo m, ano de fabricação entre a1 e a2 (inclusive), com valor não superior a x reais;
    ii. Reajustar os valores de todos os carros 0 km, considerando um aumento de 2.5%;
    iii. Retirar do estoque um determinado veículo, dada a sua placa.
*/

#include <stdio.h>
#include <string.h>

#define TAM 5

typedef struct {
    int anoModelo, anoFabric;
} TAno;

typedef struct {
    char placa[8];
    char modelo[16];
    char marca[21];
    char cor[10];
    float quilometragem;
    TAno modeliFab;
    float valor;
    char tipo[6];
} TVeiculo;

/*se estoque = 0 significa tbm que estamos no indice zero no vetor*/

void inserirCarros (TVeiculo carros[TAM], int *indice);
void exibirCarros(TVeiculo carros[TAM], int indice);

void main(){
    TVeiculo carros[TAM];
    int estoque=0, op=0;

    while (op != 6){
        printf("\n\n--------------------------------------------");
        printf("\nO que voce deseja fazer?\n\n");
        printf("1 - Inserir carro\n");
        printf("2 - Exibir todos os carros\n");
        printf("3 - Exibir carro especifico\n");
        printf("4 - Reajustar preços 0km\n");
        printf("5 - Excluir carro\n");
        printf("6 - Sair\n");
        scanf("%d", &op);
        switch (op){
            case 1:
                inserirCarros (carros, &estoque);
                break;
            case 2:
                exibirCarros (carros, estoque);
                break;
            case 3:
                
                break;
            case 4:
                
                break;
            case 5:
                
                break;
            case 6:
                printf("\nTudo bem, obrigada por usar nossos servicos!");
                break;
            default:
                printf("Comando invalido");
                break;
        }
    }

}

void inserirCarros (TVeiculo carros[TAM], int *indice){
    fflush(stdin);
    printf("Digite a placa do carro: ");
    gets(carros[*indice].placa);
    fflush(stdin);
    printf("Digite o modelo do carro: ");
    gets(carros[*indice].modelo);
    fflush(stdin);
    printf("Digite a marca do carro: ");
    gets(carros[*indice].marca);
    fflush(stdin);
    printf("Digite a cor do carro: ");
    gets(carros[*indice].cor);
    printf("Digite a quilometragem do carro: ");
    scanf("%f", &carros[*indice].quilometragem);
    printf("Digite o ano de fabricacao do carro: ");
    scanf("%d", &carros[*indice].modeliFab.anoFabric);
    printf("Digite ano do modelo do carro: ");
    scanf("%d", &carros[*indice].modeliFab.anoModelo);
    printf("Digite o valor do carro: ");
    scanf("%f", &carros[*indice].valor);
    if (carros[*indice].quilometragem != 0){
        carros[*indice].tipo[0] = 'U';
        carros[*indice].tipo[1] = 'S';
        carros[*indice].tipo[2] = 'A';
        carros[*indice].tipo[3] = 'D';
        carros[*indice].tipo[4] = 'O';
        carros[*indice].tipo[5] = '\0';
    } else {
        carros[*indice].tipo[0] = '0';
        carros[*indice].tipo[1] = 'K';
        carros[*indice].tipo[2] = 'M';
        carros[*indice].tipo[3] = '\0';
    }
    *indice = *indice + 1;
}

void exibirCarros (TVeiculo carros[TAM], int indice){
    int i;
    if (indice == 0){
        printf("Nao ha carros cadastrados");
    } else{
        for (i=0; i<indice;i++){
            printf("-------------------------------------");
            printf("Placa do carro: %s\n", carros[i].placa);
            printf("Modelo: %s\n", carros[i].modelo);
            printf("Marca: %s\n", carros[i].marca);
            printf("Cor: %s\n", carros[i].cor);
            printf("Ano do modelo: %d\n", carros[i].modeliFab.anoModelo);
            printf("Ano de fabricacao: %d\n", carros[i].modeliFab.anoFabric);
            if (carros[i].quilometragem != 0){
                printf("Tipo: %s\n", carros[i].tipo);
                printf("Quilometragem: %.0f\n", carros[i].quilometragem);
            } else {
                printf("Tipo: %s\n", carros[i].tipo);
            }
            printf("Valor: R$ %.2f\n", carros[i].valor);
            printf("\n");
        }
    }
}