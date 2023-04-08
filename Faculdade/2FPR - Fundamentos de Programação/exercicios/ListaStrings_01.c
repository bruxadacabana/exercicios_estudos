#include <stdio.h>
#include <string.h>

#define TAM 10

int strCopia (char s2[TAM], char s1[TAM]);
int strTam (char s[TAM]);
int strConcat (char s1[TAM], char s2[TAM]);
int strCompar (char s1[TAM], char s2[TAM]);

void main(){

    int op, sec;
    char origem[TAM], destino[TAM];

    printf("Informe uma string: ");
    gets(origem);
    printf("Informe outra string: ");
    gets(destino);


    while (op != 6)
    {
        printf("\n\n--------------------------------------------");
        printf("\nO que voce deseja fazer?\n\n");
        printf("1 - Exibir string\n");
        printf("2 - Exibir tamanho da string\n");
        printf("3 - Copiar conteudo de uma string para a outra\n");
        printf("4 - Concatenar duas strings\n");
        printf("5 - Comparar duas strings\n");
        printf("6 - Sair\n");
        scanf("%d", &op);

        switch (op){
            case 1 :
                printf("\nPrimeira string:  %s", origem);
                printf("\nSegunda string:  %s", destino);
                break;
            case 2:
                printf("De qual string voce gostaria de saber o tamanho?");
                printf("\n 1 - Primeira string");
                printf("\n 2 - Segunda string");
                scanf("%d", &sec);
                if (sec == 1){
                    printf("\nTamanho dessa string:  %d\n", strTam(origem));
                } else if (sec == 2){
                    printf("\nTamanho dessa string:  %d\n", strTam(destino));
                } else {
                    printf ("Comando invalido");
                }
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

int strCopia (char s2[TAM], char s1[TAM]){}

int strTam (char s[TAM]){
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

int strConcat (char s1[TAM], char s2[TAM]){}

int strCompar (char s1[TAM], char s2[TAM]){}