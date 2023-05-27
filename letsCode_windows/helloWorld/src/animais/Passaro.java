package animais;

public class Passaro extends Animal {

    //ATRIBUTOS
    static int numeroDePassaro;

    public static int getNumeroDeGatos() {
        return numeroDePassaro;
    }

    // MÉTODO CONSTRUTOR
    public Passaro(String nome, String cor, int altura, double peso) {
        this.nome = nome;
        this.cor = cor;
        this.altura = altura;
        this.peso = peso;

        numeroDePassaro++;
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