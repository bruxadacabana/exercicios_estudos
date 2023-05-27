package animais;
import animais.Cachorro;
import animais.Gato;
import animais.Passaro;

public class Main {

	public static void main(String[] args) {
		
		// criando os objetos
		Cachorro amora = new Cachorro("Amora", "branca", 25, 5.5, 5);
		Gato jack = new Gato("Jack", "preto", 20, 4.5);
		Passaro luli = new Passaro("Luli", "verde", 30, 3);
		
		amora.soar();
		jack.soar();
		luli.soar();
		
		/*cachorro1.soar();
		
		System.out.println("O cachorro pegou uma " + cachorro1.pegar()); //printa retorno do método
		
		System.out.println("O cachorro está " + cachorro1.interagir("brincar"));
		
		System.out.println("-----------------------------------");
		
		System.out.println(cachorro1.getNome());
		System.out.println(cachorro1.toString());
		
		System.out.println(cachorro2.getNome());
		System.out.println(cachorro2.toString());
		
		//cachorro2 = cachorro1;  //não atribui apenas valor, o objeto cachorro2 passa a apontar para o mesmo endereço que cachorro1
		// garbage colector -> ele vai apagar os dados antigos de cachorro2, já que não já nenhum objeto apontando para aquele endereço mais
		
		System.out.println("-----------------------------------");
		
		System.out.println(cachorro1.getNome());
		System.out.println(cachorro1.toString());
		
		System.out.println(cachorro2.getNome());
		System.out.println(cachorro2.toString());
		
		System.out.println("-----------------------------------");
		
		System.out.println(cachorro1.getNumeroDeCachorros());
		*/
	}

}
