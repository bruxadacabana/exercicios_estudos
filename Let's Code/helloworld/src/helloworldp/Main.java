package helloworldp;

//importa a classe de outro pacote
import java.time.LocalDate;
import java.time.format.TextStyle;
import java.util.Locale;
import java.time.LocalDateTime;

public class Main {

	public static void main(String[] args) {
		int a;
		int b = 2;
		
		a = 3;
		
		int soma = a + b;
		float divisao = (float) a/b; //(float) faz o casting
		System.out.println("a + b = " + soma);
		System.out.println("a + b = " + divisao);
		
		// ------------- TABELA VERDADE
		// OPERADOR && (AND)
		// true && true == true
		// true && false == false
		// false && true == false
		// false && false == false
		// OPERADOR || (OR)
		// true && true == true
		// true && false == true
		// false && true == true
		// false && false == false
		
		boolean fimDeSemana = true;
		boolean fazendoSol = false;
		boolean vamosAPraia = fimDeSemana && fazendoSol;
		
		// OPERADOR TERNÁRIO
		// usado quando tem dois comportamentos possíveis
				
		String mensagem = fimDeSemana ? "É fim de semana!" : "Não é fim de semana";
		System.out.println(mensagem);
		
		System.out.println("Vamos à praia hoje? " + vamosAPraia);
		
		
		// AULA CONDICIONAIS
		
		int nota = 100;
		String graduacao;
		
		// A 80  B 70  C 60  D 0
		
		if (nota >= 80) {
			graduacao = "A";
		} else if (nota < 80 && nota >= 70){
			graduacao = "B";
		} else if (nota < 70 && nota >= 60) {
			graduacao = "C";
		} else if (nota < 60 && nota >= 0) {
			graduacao = "D";
		} else {
			graduacao = "";
		}
		
		switch (graduacao) {
			case "A":
			case "B":
				System.out.println("Aluno aprovado");
				break;
			case "C":
			case "D":
				System.out.println("Aluno reprovado");
				break;
			default:
				System.out.println("Graduação Inválida");
		}
		
		
		// AULA STRINGS E DATAS
		
		String nome = "José";
		System.out.println(nome.toUpperCase()); // fazer todas as letras aparecerem maiusculas
		System.out.println(nome.toLowerCase()); // fazer todas as letras aparecerem minusculas
		System.out.println(nome.length()); // retorna tamanho da string
		
		String nomeOutro = "José";
		System.out.println(nome.equalsIgnoreCase(nomeOutro)); //verifica se são iguais ignorando sensitive case
		
		//ISO 8601
		
		LocalDate hoje = LocalDate.now();  //retorna data atual
		Locale brasil = new Locale("pt", "BR");
		
		System.out.println(hoje);
		//System.out.println(hoje.getDayOfWeek().getDisplayName(TextStyle.FULL, brasil)); //retorna dia da semana atual
		String diaSemana = hoje.getDayOfWeek().getDisplayName(TextStyle.FULL, brasil);
		String saudacao = "Olá!";
		LocalDateTime agora = LocalDateTime.now();
		
		if (agora.getHour() >= 0 && agora.getHour() < 12) {
			saudacao = "Bom dia!";
		} else if (agora.getHour() >= 12 && agora.getHour() < 18) {
			saudacao = "Boa tarde!";
		} else if (agora.getHour() >= 18 && agora.getHour() < 24) {
			saudacao = "Boa noite!";
		}
		
		System.out.printf("Olá, %s! Hoje é %s, %s.%n", nome, diaSemana, saudacao.toUpperCase());
	}

}
