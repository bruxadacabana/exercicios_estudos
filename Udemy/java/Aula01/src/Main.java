import java.util.Scanner;

//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        int y = 32;
        double x = 10.3278472;
        String product1 = "Computer";
        String product2 = "Office Desk";
        int age = 30;
        int code = 5290;
        char gender = 'F';
        double price1 = 2100.0;
        double price2 = 650.50;
        double measure = 53.234567;

        Scanner sc = new Scanner(System.in);

        System.out.println("Produtos:");
        System.out.printf(product1 + ", o qual custa $%.2f%n",price1);
        System.out.printf(product2 + ", o qual custa $%.2f%n",price2);
        System.out.println("Record: " + age + " anos, código " + code + " e gênero: " + gender);
        System.out.printf("Measure with eight decimal places: %.8f%n",measure);
        System.out.printf("Rouded: %.3f%n",measure);


        /*
        System.out.println(y);
        System.out.printf("%.2f%n",x);
        o f no printf significa formatado e serve para formatar
        o %.2f sifnifica duas casas de ponto flutuante
         */
        sc.close();
    }
}