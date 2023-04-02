#include <stdio.h>
#include <string.h>

#define TAM 30

int nTam(char s[TAM]);

void main(){

    int op, sel, s[TAM];

    printf("Digite uma string: ");
    fflush(stdin);
    gets(s);

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

        switch (op)
        {
        case 1:
            printf("Tem %d caracteres", nTam(s));
            break;
        case 2:
            /* code */
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            /* code */
            break;
        case 6:
            /* code */
            break;
        default:
            printf("Comando invalido");
            break;
        }

    }   
}

int nTam(char s[TAM]){
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}