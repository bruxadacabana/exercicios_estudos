#include <stdio.h>
#include <string.h>

#define TAM 30

int strTamanho(char s[TAM]);
int strRepetido(char s[TAM], char letra);
void strRemover (char s[TAM], char letra);
int palindromo (char s[TAM]);
int inverter (char s[TAM]);

void main(){

    int op, sel;
    char s[TAM], sec;

    printf("Digite uma string: ");
    fflush(stdin);
    gets(s);

    while (op != 7)
    {
        printf("\n\n--------------------------------------------");
        printf("\nO que voce deseja fazer?\n\n");
        printf("1 - Exibir string\n");
        printf("2 - Determinar o numero de caracteres de uma string\n");
        printf("3 - Determinar o numero de ocorrencias de um caracter em determinada string\n");
        printf("4 - Verificar se uma string e um palindromo,\n");
        printf("5 - Inverter uma string\n");
        printf("6 - Remover todas as ocorrencias de determinado caracter em uma string\n");
        printf("7 - Sair\n");
        scanf("%d", &op);

        switch (op){
            case 1 :
                printf("String: %s", s);
                break;
            case 2:
                printf("Essa string tem %d caracteres", strTamanho(s));
                break;
            case 3:
                printf("Qual caracter voce deseja buscar? ");
                scanf(" %c", &sec);
                printf("\nEsse caracter aparece %d vezes na string", strRepetido(s, sec));
                break;
            case 4:
                if (palindromo(s) == 0){
                    printf("Essa string nao e um palindromo");
                } else{
                    printf("Essa string e um palindromo");
                }
                break;
            case 5:
                if (inverter (s) == 0){
                    printf("Houve um erro");
                } else{
                    printf("String invertida com sucesso");
                }
                break;
            case 6:
                printf("Qual caracter você deseja remover? ");
                scanf(" %c", &sec);
                strRemover(s, sec);
                printf("\nRemovido com sucesso");
                printf("\nString atualizada: %s", s);
                break;
            case 7:
                printf("\nTudo bem, obrigada por usar nossos servicos!");
                break;
            default:
                printf("Comando invalido");
                break;
        }

    }   
}

int strTamanho(char s[TAM]){
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

int strRepetido(char s[TAM], char letra){
    int i, cont = 0;
    for (i=0; s[i] != '\0'; i++){
        if(s[i] == letra){
            cont++;
        }
    }
    return cont;
}

void strRemover (char s[TAM], char letra){
    int i, j;
    for (i=0; s[i] != '\0'; i++){
        if (s[i] == letra){
            for (j = i; s[j] != '\0'; j++){
                s[j] = s[j+1];
            }
            i = i - 1;
        }
    }
}

int palindromo (char s[TAM]){
    int i, j;
    j = (strTamanho(s) - 1);
    for (i=0; i < j; i++, j--){
        if (s[i] != s[j]){
            return 0;
        }
    }
    return 1;
}

int inverter (char s[TAM]){
    
}