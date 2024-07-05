import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class BMICalculator extends JFrame {

    private JTextField weightField;
    private JTextField heightField;
    private JComboBox<String> unitComboBox;
    private JLabel resultLabel;

    public BMICalculator() {
        setTitle("BMI Calculator");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // Create components
        weightField = new JTextField(10);
        heightField = new JTextField(10);
        unitComboBox = new JComboBox<>(new String[]{"English", "Metric"});
        resultLabel = new JLabel("BMI: ");

        JButton calculateButton = new JButton("Calculate");
        calculateButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                calculateBMI();
            }
        });

        // Create layout
        setLayout(new GridLayout(5, 2));
        add(new JLabel("Weight:"));
        add(weightField);
        add(new JLabel("Height:"));
        add(heightField);
        add(new JLabel("Unit:"));
        add(unitComboBox);
        add(calculateButton);
        add(resultLabel);

        // Set window properties
        pack();
        setLocationRelativeTo(null);
        setVisible(true);
    }

    private void calculateBMI() {
        try {
            double weight = Double.parseDouble(weightField.getText());
            double height = Double.parseDouble(heightField.getText());

            if ("English".equals(unitComboBox.getSelectedItem())) {
                // Convert pounds to kilograms and inches to meters
                weight *= 0.453592;
                height *= 0.0254;
            }

            double bmi = weight / (height * height);

            // Display BMI
            resultLabel.setText("BMI: " + bmi);
            // Display BMI category
            displayBMICategory(bmi);

        } catch (NumberFormatException ex) {
            resultLabel.setText("BMI: Invalid input");
        }
    }

    private void displayBMICategory(double bmi) {
        String category;
        if (bmi < 18.5) {
            category = "Underweight";
        } else if (bmi < 25) {
            category = "Normal";
        } else if (bmi < 30) {
            category = "Overweight";
        } else {
            category = "Obese";
        }

        JOptionPane.showMessageDialog(this, "BMI Category: " + category, "BMI Category", JOptionPane.INFORMATION_MESSAGE);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                new BMICalculator();
            }
        });
    }
}
