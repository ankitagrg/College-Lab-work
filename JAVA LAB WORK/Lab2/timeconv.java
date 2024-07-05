package Lab2;

public class timeconv {
    public static void convertSeconds(int seconds) {
        int hour = seconds / 3600;
        int minute = (seconds % 3600) / 60;
        int second = seconds % 60;

        System.out.println("Converted Time: " + hour + " hour(s), " + minute + " minute(s), " + second + " second(s)");
    }

    public static void main(String[] args) {
        int inputSeconds = 5000;

        convertSeconds(inputSeconds);
    }
}
