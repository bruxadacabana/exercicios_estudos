#include <stdio.h>
#include <string.h>

#define TAM 10

void strCopia (char s2[TAM], char s1[TAM]);
int strTam (char s[TAM]);
void strConcat (char s2[TAM], char s1[TAM]);
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
                printf("De qual string voce gostaria de saber o tamanho?\n");
                printf("1 - Primeira string\n");
                printf("2 - Segunda string\n");
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
                strCopia(destino, origem);
                printf("\nFeito!\n");
                printf("String atualizada: %s", destino);
                break;
            case 4:
                strConcat(destino, origem);
                printf("\nFeito!\n");
                printf("String atualizada: %s", destino);
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

void strCopia (char s2[TAM], char s1[TAM]){
    /*
    Essa função copia o valor da string na segunda posição do argumento para uma variável string na primeira posição. O segundo argumento pode ser uma variável, uma expressão string ou um valor literal string contido entre aspas.
    */
    int i = 0;
    while (s1[i] != '\0'){
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
}

int strTam (char s[TAM]){
    int i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return i;
}

void strConcat (char s2[TAM], char s1[TAM]){
    /*A string de origem permanecera inalterada e sera anexada ao fim da string de destino*/
    int i, j;
    for (i = strTam(s2), j=0; (i<=(TAM - 1)) || (s1[j] != '\0'); i++, j++){
        s2[i] = s1[j];
    }
    s2[i-1] = '\0';
}

int strCompar (char s1[TAM], char s2[TAM]){}