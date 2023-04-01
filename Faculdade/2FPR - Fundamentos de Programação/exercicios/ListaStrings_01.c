#include <stdio.h>
#include <string.h>

#define TAM 30

void main(){

    int op, sel;

    while (op != 6)
    {
        printf("\n\n--------------------------------------------");
        printf("\nO que voce deseja fazer?\n\n");
        printf("1 - Determinar o número de caracteres de uma string\n");
        printf("2 - Determinar o número de ocorrencias de um caracter em determinada string\n");
        printf("3 - Verificar se uma string e um palindromo,\n");
        printf("4 - Inverter uma string\n");
        printf("5 - Remover todas as ocorrencias de determinado caracter em uma string\n");
        printf("6 - Sair\n");
        scanf("%d", &op);
    }
    
}