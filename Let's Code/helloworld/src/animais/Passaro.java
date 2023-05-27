package animais;

public class Passaro extends Animal {
	
//ATRIBUTOS
	static int numeroDePassaros;
	
// SETTERS & GETTERS
	public String getNome() {
		return this.nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}
	
	public String getCor() {
		return this.cor;
	}
	public void setCor(String cor) {
		this.cor = cor;
	}
		
	public int getAltura() {
		return this.altura;
	}
	public void setAltura(int altura) {
		this.altura = altura;
	}
		
	public double getPeso() {
		return this.peso;
	}
	public void setPeso(double peso) {
		this.peso = peso;
	}
		
	public String getEstadoDeEspirito() {
		return this.estadoDeEspirito;
	}
		
	public static int getNumeroDePassaros() {
		return numeroDePassaros;
	}
	
// MÉTODO CONSTRUTOR
	public Passaro(String nome, String cor, int altura, double peso) {
		this.nome = nome;
		this.cor = cor;
		this.altura = altura;
		this.peso = peso;
		
		numeroDePassaros++;
	}
	
// MÉTODOS definidos na classe mãe
	
// :( N SEI O NOME
	@Override
	public String toString() {
		return "Passaro {" + " nome = '" + nome + '\'' + '}';
	}
	@Override
	public void soar() {
		System.out.println("PIU PIU");
	}
	
}