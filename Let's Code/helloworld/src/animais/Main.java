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
		System.out.println("Endereço desse cachorro: " + cachorro1.toString());
		
		System.out.println(cachorro2.getNome());
		System.out.println("Endereço desse cachorro: " + cachorro2.toString());
		
		cachorro2 = cachorro1;  //não atribui apenas valor, o objeto cachorro2 passa a apontar para o mesmo endereço que cachorro1
		// garbage colector -> ele vai apagar os dados antigos de cachorro2, já que não já nenhum objeto apontando para aquele endereço mais
		
		
		System.out.println(cachorro1.getNome());
		System.out.println("Endereço desse cachorro: " + cachorro1.toString());
		
		System.out.println(cachorro2.getNome());
		System.out.println("Endereço desse cachorro: " + cachorro2.toString());
		
	}

}
