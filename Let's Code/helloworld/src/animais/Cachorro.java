package animais;

// criando a classe Cachorro
public class Cachorro {
	
// características/ATRIBUTOS
	private String nome;
	private String cor;
	private int altura;
	private double peso;
	private int tamanhoRabo;
	private String estadoDeEspirito;
	
	
	
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
	
	
// CONSTRUTORES
	//executam a construção do objeto
	public Cachorro() {}  // construtrutor padrão que inicializa o objeto com as variáveis com seus valores default
	
	public Cachorro(String nome, String cor, int altura, double peso, int tamanhoRabo){   //construtor que requer que você entre com todas as informações de imediato
		this.nome = nome;
		this.cor = cor;
		this.altura = altura;
		this.peso = peso;
		this.tamanhoRabo = tamanhoRabo;
	}
	
	
//ações/MÉTODOS
	public void comer() {}     //exemplo de método que não fa nada
	
	public void latir() {
		System.out.println("AU AU");     //exemplo de método que apenas printa algo na tela, sem receber nem enviar nada
	}
	
	public String pegar() {
		return "Bolinha";      //exemplo de método que não recebe nada, mas retorna um valor
	}
	
	public String interagir(String acao) {
		/*if (acao.equals("carinho")) {
			this.estadoDeEspirito = "feliz";
		} else if(acao.equals("gritar")) {
			this.estadoDeEspirito = "bravo";          //exemplo de método que recebe algum valor e retorna outro
		} else {
			this.estadoDeEspirito = "neutro";
		}*/
		
		
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
	
}
