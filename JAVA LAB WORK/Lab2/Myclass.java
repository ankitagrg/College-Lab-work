package Lab2;
public class Myclass {
    private String name;
    private int age;

    // Parameterized Constructor//
    public Myclass(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public void printInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }

    public class Main {
        public static void main(String[] args) {
            // Using Parameterized Constructor//
            Myclass p1 = new Myclass("Ankita", 19);
            Myclass p2 = new Myclass("Laxmi", 20);
            p1.printInfo();
            p2.printInfo();
        }
    }

}
