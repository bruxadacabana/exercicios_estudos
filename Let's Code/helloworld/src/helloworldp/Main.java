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
		
	}

}
