package helloworldp;

import java.time.LocalDate;
import java.time.LocalDateTime;
import java.time.format.TextStyle;
import java.util.Locale;

public class AulaStringEData {

	public static void main(String[] args) {
		// AULA STRINGS E DATAS
		
		String nome = "José";
		System.out.println("String toda com letras maiusculas: " + nome.toUpperCase()); // fazer todas as letras aparecerem maiusculas
		System.out.println("String toda com letras minusculas: " + nome.toLowerCase()); // fazer todas as letras aparecerem minusculas
		System.out.println("Tamanho da string: " + nome.length()); // retorna tamanho da string
				
		String nomeOutro = "José";
		System.out.println("Verificando se duas strings são iguais ignorando maiuscula ou minuscula. Resposta: " + nome.equalsIgnoreCase(nomeOutro)); //verifica se são iguais ignorando sensitive case
				
		//ISO 8601
				
		LocalDate hoje = LocalDate.now();  //retorna data atual
		Locale brasil = new Locale("pt", "BR"); // configuração para exibição de data e hora serem no padrão pt-BR
				
		System.out.println("Data atual: " + hoje);
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
