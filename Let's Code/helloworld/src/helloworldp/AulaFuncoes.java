package helloworldp;

public class AulaFuncoes {

	public static void main(String[] args) {
		String nome = "José";
		int valor1 = 2;
		int valor2 = 3;
		saudacao(nome);
		System.out.println("Sabia que " + valor1 + " + " + valor2 + " = " + (soma(valor1, valor2)) + "?");
		
	}
	
	public static void saudacao(String nomeF) {
		System.out.println("Olá, " + nomeF + "!!");
	}
	
	public static int soma(int a, int b) {
		return a + b;
	}

}
