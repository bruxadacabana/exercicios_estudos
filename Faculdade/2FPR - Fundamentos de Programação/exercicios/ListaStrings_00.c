#include <stdio.h>
#include <string.h>

#define TAM 30

void int nTam(char s[TAM]);
int nRep(char s[TAM], char letra);
int nRen (char s[TAM], char letra);

void main(){

    int op, sel;
    char s[TAM], sec;

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
            printf("Essa string tem %d caracteres", nTam(s));
            break;
        case 2:
            printf("Qual caracter você deseja buscar? ");
            fflush(stdin);
            gets(sec);
            printf("Esse caracter aparece %d vezes na string", nRep(s, sec));
            break;
        case 3:
            /* code */
            break;
        case 4:
            /* code */
            break;
        case 5:
            printf("Qual caracter você deseja remover? ");
            fflush(stdin);
            gets(sec);
            if ((nRen(s, sec)) != 0){
                printf("Removido com sucesso");
            } else{
                printf("Não foram encontradas ocorrencias desse caracter na string informada");
            }
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

int nRep(char s[TAM], char letra){
    int i, cont = 0;
    for (i=0; s[i] != '\0'; i++){
        if(s[i] == letra){
            cont++;
        }
    }
    return cont;
}

int nRen (char s[TAM], char letra){
    //Remover todas as ocorrencias de determinado caracter em uma string
    int i, j;
    for (i=0; s[i] != '\0'; i++){
        if (s[i] == letra){
            for (j = i; s[j] != '\0'; j++){
                s[j]
            }
        }
    }
}