import java.util.Locale;
import java.util.Scanner;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Scanner sc = new Scanner(System.in);

        /* programa para exibir resultado de soma
        int a, b;
        a = sc.nextInt();
        b = sc.nextInt();
        System.out.println("SOMA = " + (a+b)); */

        /* programa para calcular área de um círculo
        double area, raio;
        raio = sc.nextDouble();
        area = 3.14159 * (Math.pow(raio,2));
        System.out.printf("A=%.4f%n", area);*/

        /* Leia quatro valores inteiros A, B, C e D.
        A seguir, calcule e mostre a diferença do produto de A e B
        pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).

        int A, B, C, D, DIFERENCA;
        A = sc.nextInt();
        B = sc.nextInt();
        C = sc.nextInt();
        D = sc.nextInt();
        DIFERENCA = (A * B - C * D);
        System.out.println("DIFERENCA = " + DIFERENCA);*/
        int x;

        System.out.println("Que horas são?");
        x = sc.nextInt();

        if (x < 12){
            System.out.println("Bom dia!");
        } else if (x < 18){
            System.out.println("Boa tarde!");
            } else {
                System.out.println("Boa noite!");
            }

        sc.close();
    }
}