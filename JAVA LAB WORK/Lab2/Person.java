package Lab2;

public class Person {
    private String name;
    private int age;
    private String address;

    // Getter and Setter for name//
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    // Getter and Setter for age//
    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
    // Getter and Setter for address//
    public String getadd() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
        

    }

    public static void main(String[] args) {
        // Creating an instance of the Person class//
        Person person = new Person();

        // Using setter methods to set values//
        person.setName("Ankita");
        person.setAge(19);
        person.setAddress("Birauta");

        // Using getter methods to retrieve values//
        System.out.println("Name: " + person.getName());
        System.out.println("Age: " + person.getAge());
        System.out.println("Address:"+ person.getadd());
    }
}
