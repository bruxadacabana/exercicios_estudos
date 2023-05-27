package Lojas;
import animais.Animal;
import animais.Cachorro;

public class Petshop {

    // esse método aceita como parametro qualquer animal
    public void darBanho (Animal animal){
        animal.setEstadoDeEspirito("limpo");
    }

    public void deixarNoHotel (Animal animal){
        animal.setEstadoDeEspirito("com saudades");
    }

    // esse metodo aceita como parametro apenas cachorros
    public void tosar(Cachorro cachorro){
        cachorro.setEstadoDeEspirito("tosado");
    }

}
