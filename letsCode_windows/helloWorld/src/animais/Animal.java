package animais;

public abstract class Animal {

    // ATRIBUTOS
    protected String nome;
    protected String cor;
    protected int altura;
    protected double peso;
    protected String estadoDeEspirito;

    // SETTERS & GETTERS
    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCor() {
        return cor;
    }
    public void setCor(String cor) {
        this.cor = cor;
    }

    public int getAltura() {
        return altura;
    }
    public void setAltura(int altura) {
        this.altura = altura;
    }

    public double getPeso() {
        return peso;
    }
    public void setPeso(double peso) {
        this.peso = peso;
    }

    public String getEstadoDeEspirito() {
        return estadoDeEspirito;
    }
    public void setEstadoDeEspirito(String estadoDeEspirito) {
        this.estadoDeEspirito = estadoDeEspirito;
    }

    // MÉTODOS
    protected void comer(){}

    protected void dormir(){}

    public abstract void soar();

    public String interagir (String acao){
        switch (acao){
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
