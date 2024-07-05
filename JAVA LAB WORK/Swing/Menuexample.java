
import javax.swing.JFrame;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;

public class Menuexample extends JFrame {
    JFrame frame;
    JMenuBar mb;
    JMenu file, edit, help;
    JMenuItem save, saveAs, exit, format, italic, bold, underline;

    Menuexample(){
    frame = new JFrame("Menuexample"); {
        frame = new JFrame("Menu Example");
        mb = new JMenuBar();
        frame.add(mb);
        file = new JMenu("File");
        mb.add(file);
        edit = new JMenu("Edit");
        mb.add(edit);
        help = new JMenu("Help");
        mb.add(help);
        save = new JMenuItem("Save");
        file.add(saveAs);
        exit = new JMenuItem("Exit");
        file.add(exit);
        format = new JMenu("Format");
        italic = new JMenuItem("Italic");
        format.add(italic);
        bold = new JMenuItem("Bold");
        format.add(bold);
        underline = new JMenuItem("Underline");
        format.add(underline);
        edit.add(format);
        frame.setJMenuBar(mb);
        frame.setSize(400, 400);
        frame.setVisible(true);
    }
    }
    public static void main(String[] args) {
        new Menuexample();
    }
    public JFrame getFrame() {
        return frame;
    }
    public void setFrame(JFrame frame) {
        this.frame = frame;
    }
    public JMenuBar getMb() {
        return mb;
    }
    public void setMb(JMenuBar mb) {
        this.mb = mb;
    }
    public JMenu getFile() {
        return file;
    }
    public void setFile(JMenu file) {
        this.file = file;
    }
    public JMenu getEdit() {
        return edit;
    }
    public void setEdit(JMenu edit) {
        this.edit = edit;
    }
    public JMenu getHelp() {
        return help;
    }
    public void setHelp(JMenu help) {
        this.help = help;
    }
    public JMenuItem getSave() {
        return save;
    }
    public void setSave(JMenuItem save) {
        this.save = save;
    }
    public JMenuItem getSaveAs() {
        return saveAs;
    }
    public void setSaveAs(JMenuItem saveAs) {
        this.saveAs = saveAs;
    }
    public JMenuItem getExit() {
        return exit;
    }
    public void setExit(JMenuItem exit) {
        this.exit = exit;
    }
    public JMenuItem getFormat() {
        return format;
    }
    public void setFormat(JMenuItem format) {
        this.format = format;
    }
    public JMenuItem getItalic() {
        return italic;
    }
    public void setItalic(JMenuItem italic) {
        this.italic = italic;
    }
    public JMenuItem getBold() {
        return bold;
    }
    public void setBold(JMenuItem bold) {
        this.bold = bold;
    }
    public JMenuItem getUnderline() {
        return underline;
    }
    public void setUnderline(JMenuItem underline) {
        this.underline = underline;
    }

}
