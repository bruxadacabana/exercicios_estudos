package helloworldp;

public class AulaVetores {

	public static void main(String[] args) {
		
		int[] numeros = new int[5];
		System.out.println("Números de 1 à 5:");
		for (int i = 0; i < numeros.length; i++) {
			numeros[i] = (i + 1);
			System.out.println(numeros[i]);
		}
		
		System.out.println("Letras de A à E:");
		String[] letras = {"A", "B", "C", "D", "E"};
		for (int i = 0; i < letras.length; i++) {
			System.out.println(letras[i]);
		}
		
		System.out.println("Testando para saber o maior, o menor e a média dos números de um vetor:");
		int[] outrosNumeros = {9, 10, 12, 25, 2};
		int maior = outrosNumeros[0];
		int menor = outrosNumeros[0];
		float media = 0;
		
		for (int i = 0; i < outrosNumeros.length; i++) {
			if (outrosNumeros[i] > maior) {
				maior = outrosNumeros[i];
			}
			if (outrosNumeros[i] < menor) {
				menor = outrosNumeros[i];
			}
			media += outrosNumeros[i];
		}
		
		System.out.println("O maior número do vetor é " + maior);
		System.out.println("O menor número do vetor é " + menor);
		System.out.println("A média entre os valores do vetor é " + ((float) media/outrosNumeros.length));
	}

}
