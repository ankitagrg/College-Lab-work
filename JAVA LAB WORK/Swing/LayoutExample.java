
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class LayoutExample {
    public static void main(String[] args) {
        JFrame frame = new JFrame("Example Layout");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 300);
        frame.setExtendedState(JFrame.MAXIMIZED_BOTH);

        // Using BorderLayout //
        frame.setLayout(new BorderLayout());

        JPanel panel = new JPanel();
        JButton homeBtn = new JButton("Home");
        panel.add(homeBtn);
        JButton loginBtn = new JButton("Login");
        panel.add(loginBtn);
        frame.add(panel, BorderLayout.WEST);
        JButton regiBtn = new JButton("Register");
        panel.add(regiBtn);

        regiBtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                RegistrationForm frame = new RegistrationForm();
                frame.setVisible(true);
            }
        });
        frame.add(panel, BorderLayout.NORTH);

        // Set the menu bar for the frame //
        frame.setJMenuBar(createMenu());

        frame.setVisible(true);
    }

    private static JMenuBar createMenu() {

        JMenuBar menuBar = new JMenuBar();

        // Create File menu //
        JMenu fileMenu = new JMenu("File");

        // Create menu items for File menu //
        JMenuItem openItem = new JMenuItem("Open");
        JMenuItem saveItem = new JMenuItem("Save");
        JMenuItem exitItem = new JMenuItem("Exit");

        // Add menu items to File menu //
        fileMenu.add(openItem);
        fileMenu.add(saveItem);
        fileMenu.addSeparator(); // Separator between Save and Exit //
        fileMenu.add(exitItem);

        // Create Edit menu //
        JMenu editMenu = new JMenu("Edit");

        // Create submenu for Edit menu //
        JMenu formatSubMenu = new JMenu("Format");

        // Create menu items for Format submenu //
        JMenuItem boldItem = new JMenuItem("Bold");
        JMenuItem italicItem = new JMenuItem("Italic");

        // Add menu items to Format submenu //
        formatSubMenu.add(boldItem);
        formatSubMenu.add(italicItem);

        // Add Format submenu to Edit menu //
        editMenu.add(formatSubMenu);

        // Add File and Edit menus to the menu bar //
        menuBar.add(fileMenu);
        menuBar.add(editMenu);

        return menuBar;

    }

}

class RegistrationForm extends JFrame {

}
