import javax.swing.*;
    import java.awt.*;
    import java.awt.event.ActionEvent;
    import java.awt.event.ActionListener;
    import java.util.ArrayList;
    import java.util.List;
    
    public class SchoolManagementSystem extends JFrame {
    
        private List<Student> studentList;
    
        public SchoolManagementSystem() {
            // Initialize the student list
            studentList = new ArrayList<>();
    
            // Set up the main window
            setTitle("School Management System");
            setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            setLayout(new BorderLayout());
    
            // Create buttons
            JButton registerButton = new JButton("Register");
            JButton viewButton = new JButton("View");
    
            // Add buttons to the main window
            add(registerButton, BorderLayout.NORTH);
            add(viewButton, BorderLayout.SOUTH);
    
            // Add action listeners to buttons
            registerButton.addActionListener(new ActionListener() {
                @Override
                public void actionPerformed(ActionEvent e) {
                    openRegistrationForm();
                }
            });
    
            viewButton.addActionListener(new ActionListener() {
                @Override
                public void actionPerformed(ActionEvent e) {
                    openStudentList();
                }
            });
    
            // Set window properties
            pack();
            setLocationRelativeTo(null);
            setVisible(true);
        }
    
        private void openRegistrationForm() {
            // Create a new RegistrationForm instance and pass the student list reference
            RegistrationForm registrationForm = new RegistrationForm(studentList);
        }
    
        private void openStudentList() {
            // Create a new StudentListForm instance and pass the student list reference
            StudentListForm studentListForm = new StudentListForm(studentList);
        }
    
        public static void main(String[] args) {
            SwingUtilities.invokeLater(new Runnable() {
                @Override
                public void run() {
                    new SchoolManagementSystem();
                }
            });
        }
    }
    


