#include <stdio.h>

int quantCarac (char nome[], char letra);

void main(){
    int quant;
    char caracter, nomeArquivo[30];

    printf("Digite o nome do arquivo: ");
    gets(nomeArquivo);

    printf("Digite o caracter a ser buscado: ");
    fflush(stdin);
    scanf("%c", &caracter);


    quant = quantCarac(nomeArquivo, caracter);

    switch (quant){
        case -1:
            printf ("\nErro na abertura do arquivo!");
            break;
        case 0:
            printf ("\nArquivo vazio!");
            break;
        default:
            printf ("\nO arquivo %s contem %d caracteres.", nomeArquivo, quant);
    }
}

int quantCarac (char nome[], char letra) {
	FILE *arq;
	char caracter;
	int cont = 0;
	
	arq = fopen (nome, "r");
		
	if (!arq) {
		return -1;
	} else {
		while (fscanf (arq, "%c", &caracter) != EOF) {
			cont++;
		}
		
		fclose (arq);
		
		return cont; 
	}
}