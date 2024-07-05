package Lab1;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Readdata {
    public int getInteger() {
        System.out.println("Write a Integer number");
        String line = null;
        int value = 0;
        try {
            BufferedReader is = new BufferedReader(new InputStreamReader(System.in));
            line = is.readLine();
            value = Integer.parseInt(line);
        } catch (Exception e) {
            System.out.println("Unexpected IO ERROR" + e);
        }
        return value;
    }

    public static void main(String[] args) {
        Readdata a = new Readdata();
        System.out.println("Integer:" + a.getInteger());
    }

}
