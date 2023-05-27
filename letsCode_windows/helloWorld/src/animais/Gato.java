package animais;

public class Gato extends Animal {

    //ATRIBUTOS
    static int numeroDeGatos;
	/*private String nome;
	private String cor;
	private int altura;  //variaveis já definidas na classe mãe (Animais)
	private double peso;
	private String estadoDeEspirito;*/

    public static int getNumeroDeGatos() {
        return numeroDeGatos;
    }

    // MÉTODO CONSTRUTOR
    public Gato(String nome, String cor, int altura, double peso) {
        this.nome = nome;
        this.cor = cor;
        this.altura = altura;
        this.peso = peso;

        numeroDeGatos++;
    }

    // MÉTODOS definidos na classe mãe


    // :( N SEI O NOME
    @Override
    public String toString() {
        return "Gato {" + " nome = '" + nome + '\'' + '}';
    }

    @Override
    public void soar() {
        System.out.println("MIAU MIAU");
    }

}