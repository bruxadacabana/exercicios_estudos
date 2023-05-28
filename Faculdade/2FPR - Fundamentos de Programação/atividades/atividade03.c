#include <stdio.h>
#include <string.h>

#define QUANT 5
typedef struct {
    int dia;
    int mes;
    int ano;
} TData;

typedef struct {
    int cod_cadastro;
    char nome_pet[15];
    char nome_tutor[40];
    char email[30];
    TData dataUVac;
} TPet;

//void msgVencidos ();
int preencherVetor (TPet animais[]);

void main (){
    TPet pets[QUANT];

    if (preencherVetor(pets) == 1){
        printf("Nome do tutor: %s\nNome do pet: %s", pets->nome_tutor, pets->nome_pet);
    } else {
        printf("Houve um erro");
    }
}

int preencherVetor (TPet animais[]){
    animais[0].cod_cadastro = 001;
    animais->nome_pet[0] = "Jack";
    animais->nome_tutor[0] = "Denise";
    animais->email[0] = "sta.jorgea@gmail.com";

    return 1;

}