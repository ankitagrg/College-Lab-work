package Lab2;

public class minutes {
    public static void convertMinutes(float minutes) {
        int totalSeconds = Math.round(minutes * 60);
        int hour = totalSeconds / 3600;
        int minute = (totalSeconds % 3600) / 60;
        int second = totalSeconds % 60;

        System.out.println("Converted Time: " + hour + " hour(s), " + minute + " minute(s), " + second + " second(s)");
    }

    public static void main(String[] args) {
        float inputMinutes = 45.5f; // You can change this value as per your requirement

        convertMinutes(inputMinutes);
    }
}
    

