#include <stdio.h>
#include <string.h>

#define TAM 10

void copiaSub (char s[TAM], char sub[TAM], int indice);

void main(){
    int i;
    char origem[TAM], destino[TAM];

    printf("Digite uma string: ");
    gets(origem);
    printf("\0Digite a posicao onde iniciara a substring: ");
    scanf("%d", &i);

    copiaSub(origem, destino, i);

    printf("Substring: %s", destino);

}

void copiaSub (char s[TAM], char sub[TAM], int indice){
    
}