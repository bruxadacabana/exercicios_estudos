/*
Desenvolver uma função que, dada uma string str, substitua uma substring s1 de str (definida pelas posições inicial e final) por outra string, s2.
*/

#include <stdio.h>
#include <string.h>

#define TOTAL 20

int subst(char str[], char s2[], int inicio, int fim);
void mover(char str[], int inicio, int tam);

void main(){
    char str[TOTAL] = "e ai, vc vem?", 
    s2[TOTAL];
    int inicio, fim, resultado;

    printf("String: %s", str);

    printf("\nDigite a substring: ");
    gets(s2);
    printf("\nDigite a primeira posicao: ");
    scanf("%d", &inicio);
    printf("\nDigite a ultina posicao: ");
    scanf("%d", &fim);

    resultado = subst(str, s2, inicio, fim);

    if (resultado == 0){
        printf("Houve um erro");
    } else{
        printf("\nSegue string atualizada:");
        printf("\n%s", str);
    }

}

int subst(char str[], char s2[], int inicio, int fim){
    int i, j, tams2, tam;

    tams2 = strlen(s2);

    tam = (tams2 - ((fim - inicio)+1)); // calculo da quantidade de espaços q se deve andar para a direita

    mover(str, (fim+1), tam);

    /*if ((inicio >= tam) || (fim >= tam)){
        return 0;
    }*/

    for(i=inicio, j=0; s2[j] != '\0'; i++,j++){
        str[i] = s2[j];
    }

    return 1;

}

void mover(char str[], int inicio, int tam){
    int i;
    for (i=strlen(str); i >= inicio; i--){
        str[i+tam] = str[i];
    }
}
