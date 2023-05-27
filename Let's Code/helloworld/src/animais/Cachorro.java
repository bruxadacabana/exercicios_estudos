package animais;

// criando a classe Cachorro
public class Cachorro extends Animal {
	
// características/ATRIBUTOS
	static int numeroDeCachorros;  // variável estática para contar a quantidade de cachorros (objetos) criados com essa classe
	/*private String nome;
	private String cor;
	private int altura;
	private double peso;
	private String estadoDeEspirito;*/
	private int tamanhoRabo;
	
	
	
	//getters e setters servem para controlar quem/como tem acesso às variáveis
	public String getNome() {
		return this.nome;   // esse método está acessando a variável 'nome' e passando para quem chamou 
	}
	
	public void setNome (String nome) {
		this.nome = nome;
	}
	
	public String getCor() {
		return this.cor;   // esse método está acessando a variável 'cor' e passando para quem chamou 
	}
	
	public void setCor (String cor) {
		this.cor = cor;
	}
	public int getAltura() {
		return this.altura;   // esse método está acessando a variável 'altura' e passando para quem chamou 
	}
	
	public void setAltura (int altura) {
		this.altura = altura;
	}
	public double getPeso() {
		return this.peso;   // esse método está acessando a variável 'peso' e passando para quem chamou 
	}
	
	public void setPeso (double peso) {
		this.peso = peso;
	}
	public int getTamanhoRabo() {
		return this.tamanhoRabo;   // esse método está acessando a variável 'tamanhoRabo' e passando para quem chamou 
	}
	
	public void setTamanhoRabo (int tamanhoRabo) {
		this.tamanhoRabo = tamanhoRabo;
	}
	
	public String getEstadoDeEspirito() {
		return this.estadoDeEspirito;   // esse método está acessando a variável 'estadoDeEspirito' e passando para quem chamou 
	}
	
	public static int getNumeroDeCachorros() {
		return numeroDeCachorros;
	}
	
	
// CONSTRUTORES
	//executam a construção do objeto
	public Cachorro() {}  // construtrutor padrão que inicializa o objeto com as variáveis com seus valores default
	
	public Cachorro(String nome, String cor, int altura, double peso, int tamanhoRabo){   //construtor que requer que você entre com todas as informações de imediato
		this.nome = nome;
		this.cor = cor;
		this.altura = altura;
		this.peso = peso;
		this.tamanhoRabo = tamanhoRabo;
		
		numeroDeCachorros++;  //toda vez que alguém usar o construtor, o contador (variável estática int) somará um
	}
	
	
//ações/MÉTODOS
	/*public void comer() {}     //exemplo de método que não fa nada
	
	public void soar() {
		System.out.println("AU AU");     //exemplo de método que apenas printa algo na tela, sem receber nem enviar nada
	}
	
	public String pegar() {
		return "Bolinha";      //exemplo de método que não recebe nada, mas retorna um valor
	}*/
	
	public String interagir(String acao) {
		
		switch (acao) {
			case "carinho":
				this.estadoDeEspirito = "feliz";
				break;
			case "gritar":
				this.estadoDeEspirito = "triste";
				break;
			case "pisar na patinha":
				this.estadoDeEspirito = "bravo";
				break;
			case "brincar":
				this.estadoDeEspirito = "animado";
				break;
			default:
				this.estadoDeEspirito = "neutro";
		}
		
		return this.estadoDeEspirito;
	}
	
	// definindo como sera exibido o método "toString". Geralmente usado para identificar objetos diferentes, então é comumente usado em documentos ou algo que seja unico para aquele objeto
	@Override
	public String toString() {
		return "Cachorro{" +
				"nome='" + nome + '\'' +
				'}';
	}
	
	@Override
	public void soar() {
		System.out.println("AU AU");
	}
	
}
