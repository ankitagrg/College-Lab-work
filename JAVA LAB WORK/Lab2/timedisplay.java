package Lab2;

import java.text.DecimalFormat;

public class timedisplay {
    public static void displayTime(int hours, int minutes, int seconds) {
        DecimalFormat df = new DecimalFormat("00");
        String formattedTime = df.format(hours) + ":" + df.format(minutes) + ":" + df.format(seconds);
        System.out.println("Time: " + formattedTime);
    }

    public static void main(String[] args) {
        int inputHours = 12;
        int inputMinutes = 30;
        int inputSeconds = 45;

        displayTime(inputHours, inputMinutes, inputSeconds);
    }
}
