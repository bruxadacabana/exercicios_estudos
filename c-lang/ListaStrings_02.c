/*
    Dada uma string s, desenvolver uma função que determine se s é ou não um palíndromo. 
    Obs.: um palíndromo é uma palavra ou frase que pode ser lida da esquerda para a direita
*/

#include <stdio.h>
#include <string.h>

#define TAM 30

int palindromo (char s[TAM]);

void main () {
    char s[TAM];

    printf("Digite uma string: ");
    gets(s);
    if (palindromo(s) == 0){
        printf("Essa string nao e um palindromo");
        } else{
            printf("Essa string e um palindromo");
        }
    
}

int palindromo (char s[TAM]){
    int i, j;
    j = (strlen(s) - 1);
    for (i=0; i < j; i++, j--){
        if (s[i] != s[j]){
            return 0;
        }
    }
    return 1;
}