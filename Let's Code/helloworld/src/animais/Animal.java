package animais;

public class Animal {

//ATRIBUTOS
	protected String nome;
	protected String cor;
	protected int altura;
	protected double peso;
	protected String estadoDeEspirito;
	
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
	public void setEstadoDeEspirito(String estadoDeEspirito) {
		this.estadoDeEspirito = estadoDeEspirito;
	}

	
// MÉTODOS
	protected void comer() {}
		
	protected void dormir() {}
		
	protected void soar() {
		System.out.println("cri cri");
	}	

}
