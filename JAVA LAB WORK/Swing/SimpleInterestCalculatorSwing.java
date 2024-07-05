import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class SimpleInterestCalculatorSwing extends JFrame {

    private JTextField principalField;
    private JTextField timeField;
    private JTextField rateField;
    private JLabel resultLabel;

    public SimpleInterestCalculatorSwing() {
        setTitle("Simple Interest Calculator (Swing)");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Create components
        principalField = new JTextField(10);
        timeField = new JTextField(10);
        rateField = new JTextField(10);
        resultLabel = new JLabel("Result: ");

        JButton calculateButton = new JButton("Calculate");
        calculateButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                calculateSimpleInterest();
            }
        });

        // Create layout
        setLayout(new GridLayout(4, 2));
        add(new JLabel("Principal:"));
        add(principalField);
        add(new JLabel("Time (years):"));
        add(timeField);
        add(new JLabel("Annual Interest Rate:"));
        add(rateField);
        add(calculateButton);
        add(resultLabel);

        // Set window properties
        pack();
        setLocationRelativeTo(null);
        setVisible(true);
    }

    private void calculateSimpleInterest() {
        try {
            double principal = Double.parseDouble(principalField.getText());
            double time = Double.parseDouble(timeField.getText());
            double rate = Double.parseDouble(rateField.getText());

            double interest = (principal * time * rate) / 100;

            resultLabel.setText("Result: Simple Interest = " + interest);
        } catch (NumberFormatException ex) {
            resultLabel.setText("Result: Please enter valid numbers.");
        }
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                new SimpleInterestCalculatorSwing();
            }
        });
    }
}

