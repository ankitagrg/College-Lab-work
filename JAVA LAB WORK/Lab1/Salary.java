package Lab1;

public class Salary {
    public static void main(String[] args) {
        double hours = Double.valueOf(args[0]).doubleValue();
        double rate = Double.valueOf(args[1]).doubleValue();
        double pay;
        pay = rate * hours;
        System.out.println("The paycheck is" + pay + "dollars.");
        if (rate > 12.5) {
            System.err.println("This employee is not getting the legally required minimum wage.");
        }
        if (hours > 7 * 24) {
            System.err.println("Did this employee really work" + hours + "hours?");

        }
    }

}
