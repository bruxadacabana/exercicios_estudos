package animais;

public class Main {

	public static void main(String[] args) {
		
		// criando o objeto 'cachorro1' da classe 'Cachorro'
		Cachorro cachorro1 = new Cachorro("Fido", "azul", 25, 5.5, 5);
		Cachorro cachorro2 = new Cachorro("Puppy", "marrom", 20, 13, 5);
		
		cachorro1.latir();
		
		System.out.println("O cachorro pegou uma " + cachorro1.pegar()); //printa retorno do método
		
		System.out.println("O cachorro está " + cachorro1.interagir("brincar"));
		
		System.out.println(cachorro1.getNome());
		System.out.println(cachorro2.getNome());
		
	}

}
