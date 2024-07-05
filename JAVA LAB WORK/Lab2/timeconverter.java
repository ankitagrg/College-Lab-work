package Lab2;

public class timeconverter {
    public static void convertHours(float hours) {
        int totalSeconds = Math.round(hours * 3600);
        int hour = totalSeconds / 3600;
        int minute = (totalSeconds % 3600) / 60;
        int second = totalSeconds % 60;

        System.out.println("Converted Time: " + hour + " hour(s), " + minute + " minute(s), " + second + " second(s)");
    }

    public static void main(String[] args) {
        float inputHours = 2.75f;

        convertHours(inputHours);
    }
}
