package animais;

public class Cachorro extends Animal {
    static int numeroDeCachorros;
    private int tamanhoDoRabo;

    public static int getNumeroDeCachorros(){
        return numeroDeCachorros;
    }

    // MÉTODO CONSTRUTOR
    public Cachorro(String nome, String cor, int altura, double peso){
        this.nome = nome;
        this.cor = cor;
        this.altura = altura;
        this.peso = peso;

        numeroDeCachorros++;
    }

    // outros métodos definidos na classe pai

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
