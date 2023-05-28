#include <stdio.h>

int criacao (FILE *entrada, FILE *saida);

void main (){
	FILE *entrada, *saida;
	char nome[30];
	int resultado;
	
	printf("Entre com o nome do arquivo: ");
	gets(nome);
	
	entrada = fopen(nome, "r");
	saida = fopen("saida.txt", "w");
	
	resultado = criacao(entrada, saida);

	switch (resultado){
		case -1:
			printf("Erro");
			break;
		case 0:
			printf("Erro!");
			break;
		default:
			printf("Arquivo gerado com sucesso!");
	}
	
	fclose(entrada);
	fclose(saida);

}

int criacao (FILE *entrada, FILE *saida){
	// variaveis
	int ch;
	
	if (fscanf(entrada, "%d", &ch) == 1){
		criacao(entrada, saida);
		fprintf(saida, "%d\n", ch);
	}
	
	return 1;
}