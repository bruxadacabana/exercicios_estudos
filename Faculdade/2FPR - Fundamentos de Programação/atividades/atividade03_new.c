#include <stdio.h>
#include <string.h>

#define Q 5

typedef struct {
    int dia;
    int mes;
    int ano;
} TData;

typedef struct {
    int cod_cadastro;
    char nome_pet[10];
    char nome_tutor[40];
    char email[30];
    TData dataUVac;
} TPet;

void preencherDados (TPet pets[]);

int gerarAviso(TPet pets[], TData data);

int compararDatas (TData data1, TData data2);

void main() {
    TPet pets[Q];
    TData hoje;
    int i;

    hoje.dia = 28;
    hoje.mes = 05;
    hoje.ano = 2023;

    preencherDados (pets);

    i = gerarAviso(pets, hoje);

    if (i == 0){
        printf("Houve um erro na execucao!");
    } else {
        printf("Mensagens geradas com sucesso!");
    }

}

int gerarAviso(TPet pets[], TData data){
    FILE *arq;
    int i = 0, j;

    arq = fopen("mensagens.txt", "w");

    if (!arq){
        return 0;
    } else {
        for (i = 0; i < Q; i++){
            j = compararDatas(data, pets[i].dataUVac);
            if (j == 1){
                fprintf(arq, "%s | Prezado %s, a vacina do pet %s venceu no dia %d/%d/%d. Podemos agendar a nova dose?\n", pets[i].email, pets[i].nome_tutor, pets[i].nome_pet, pets[i].dataUVac.dia, pets[i].dataUVac.mes, pets[i].dataUVac.ano);
                i++;
            }
        }
    }

    fclose(arq);

    return 1;

}

int compararDatas (TData data1, TData data2){
    // "data1" se refere � data atual e "data2" � data da ultima vacina do pet
    if (data1.ano == data2.ano){
        return 0;
    } else if ((data2.ano == (data1.ano-1)) && (data2.mes > data1.mes)){
        return 0;
    } else if ((data2.ano == (data1.ano - 1)) && (data2.mes == data1.mes) && (data2.dia > data1.dia)){
        return 0;
    } else {
        return 1;
    }
}

void preencherDados(TPet pets[]){
    // CRIA��O DOS REGISTROS
    pets[0].cod_cadastro = 001;
    strcpy (pets[0].nome_pet, "Jack");
    strcpy(pets[0].nome_tutor, "Denise");
    strcpy(pets[0].email, "stadj@mail.com");
    pets[0].dataUVac.dia = 2;
    pets[0].dataUVac.mes = 5;
    pets[0].dataUVac.ano = 2020;

    pets[1].cod_cadastro = 002;
    strcpy (pets[1].nome_pet, "Amora");
    strcpy(pets[1].nome_tutor, "Jose");
    strcpy(pets[1].email, "jrmf@mail.com");
    pets[1].dataUVac.dia = 2;
    pets[1].dataUVac.mes = 5;
    pets[1].dataUVac.ano = 2023;

    pets[2].cod_cadastro = 003;
    strcpy (pets[2].nome_pet, "Titico");
    strcpy(pets[2].nome_tutor, "Carise");
    strcpy(pets[2].email, "cma@mail.com");
    pets[2].dataUVac.dia = 2;
    pets[2].dataUVac.mes = 9;
    pets[2].dataUVac.ano = 2022;

    pets[3].cod_cadastro = 004;
    strcpy (pets[3].nome_pet, "Orfeu");
    strcpy(pets[3].nome_tutor, "Felipe");
    strcpy(pets[3].email, "famed@mail.com");
    pets[3].dataUVac.dia = 1;
    pets[3].dataUVac.mes = 12;
    pets[3].dataUVac.ano = 2021;

    pets[4].cod_cadastro = 005;
    strcpy (pets[4].nome_pet, "Leo");
    strcpy(pets[4].nome_tutor, "Breno");
    strcpy(pets[4].email, "brobert@mail.com");
    pets[4].dataUVac.dia = 26;
    pets[4].dataUVac.mes = 2;
    pets[4].dataUVac.ano = 2020;
}
