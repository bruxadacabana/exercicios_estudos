package atv1;

import javax.swing.*;

public class Atividade {

	public static void main(String entrada[]) {
		// variáveis
		int a, b, quo;
		double pot;
		String msg = "";
		
		// entrada
		a = Integer.parseInt(JOptionPane.showInputDialog("Digite um número inteiro"));
		b = Integer.parseInt(JOptionPane.showInputDialog("Digite um número inteiro"));
		
		// calculos
		pot = Math.pow(a, b);
		quo = a/b;
		
		// saida
		msg = msg + "o resultado da divisão de " + a + " por " + b + " é " + quo + "\n";
		msg = msg + "o numero " + a + " elevado a " + b + " é igual a " + pot + "\n";
		JOptionPane.showMessageDialog(null, msg);
		System.exit(0);
}
}
