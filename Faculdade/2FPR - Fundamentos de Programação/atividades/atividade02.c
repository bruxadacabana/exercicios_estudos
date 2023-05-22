/*
Desenvolver uma função que, dada uma string str, substitua uma substring s1 de str (definida pelas posições inicial e final) por outra string, s2.
*/

#include <stdio.h>
#include <string.h>

#define TOTAL 20

int subst(char str[TOTAL], char s2[TOTAL], int inicio, int fim);

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

int subst(char str[TOTAL], char s2[TOTAL], int inicio, int fim){
    int i, j, tam;

    tam = strlen(str);

    /*if ((inicio >= tam) || (fim >= tam)){
        return 0;
    }*/

    for(i=inicio, j=0; i<fim; i++,j++){
        str[i] = s2[j];
    }

    return 1;

}
