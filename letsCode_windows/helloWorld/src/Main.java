import Lojas.Petshop;
import animais.Animal;
import animais.Cachorro;
import animais.Gato;
import animais.Passaro;

public class Main {
    public static void main(String[] args) {

        Cachorro amora = new Cachorro("Amora", "branca", 25, 5.5);
        Gato jack = new Gato("Jack", "preto", 20, 4.5);
        Animal luli = new Passaro("Luli", "azul", 20, 3);

        amora.interagir("gritar");
        System.out.println(amora.getEstadoDeEspirito());

        Petshop petshop = new Petshop();

        petshop.darBanho(luli);
        System.out.println(luli.getNome() + " está " + luli.getEstadoDeEspirito());

        petshop.darBanho(jack);
        System.out.println(jack.getNome() + " está " + jack.getEstadoDeEspirito());

        petshop.tosar(amora);
        System.out.println(amora.getNome() + " está " + amora.getEstadoDeEspirito());

    }
}