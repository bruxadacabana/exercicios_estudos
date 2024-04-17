import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class OlaMundoJava extends JDialog {
    private JPanel contentPane;
    private JButton btnClique;
    private JLabel lblMensagem;
    private JButton buttonOK;

    public OlaMundoJava() {
        setContentPane(contentPane);
        setModal(true);
        getRootPane().setDefaultButton(buttonOK);
        btnClique.addActionListener(new ActionListener() {
            /**
             * @param e the event to be processed
             */
            @Override
            public void actionPerformed(ActionEvent e) {

            }
        });
    }

    public static void main(String[] args) {
        OlaMundoJava dialog = new OlaMundoJava();
        dialog.pack();
        dialog.setVisible(true);
        System.exit(0);
    }
}
