/*Com os conhecimentos adquiridos até agora, desenvolva um programa em Java que declara variáveis inteiras, reais e String, recebe dois números inteiros usando interface com usuário, calcula o quociente da divisão dos dois números, a potência do primeiro número pelo segundo número e mostra essas informações usando interface com usuário.*/
import javax.swing.*;
class Atividade{
    public static void main (String entrada[]){
        // variáveis
        int a, b, quo;
        double pot;
        String msg = "";
        // entrada
        a = Integer.parseInt(JOptionPane.showInputDialog("Digite um numero inteiro"));
        b = Integer.parseInt.showInputDialog("Digite outro numero inteiro"));
        // calculos
        pot = Math.pow(a, b);
        quo = a/b;
        // saída
        msg = msg + "o resultado da divisão de " + a + " por " + b + " é " + quo + "\n";
        msg = msg + "o número " + a + " elevado a " + " é igual a " + pot + "\n";
        JOptionPane.showMessageDialog(null, msg);
        System.exit(0);
    }
}