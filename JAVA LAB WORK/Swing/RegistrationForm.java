import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.List;

public class RegistrationForm extends JFrame {

    private List<Student> studentList;

    public RegistrationForm(List<Student> studentList) {
        this.studentList = studentList;

        setTitle("Student Registration Form");
        setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);

        // Create components for the registration form
        // (JLabel, JTextField, JRadioButton, JCheckBox, JComboBox, JButton)

        // Use different layout managers as specified (BorderLayout, GridLayout, FlowLayout)

        // Implement event handling for the Register button
        // Validate input fields and add student details to the list

        // Display confirmation dialog on successful registration

        // Set window properties
        pack();
        setLocationRelativeTo(null);
        setVisible(true);
    }
}
