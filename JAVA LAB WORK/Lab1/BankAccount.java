package Lab1;

import java.util.Scanner;

public class BankAccount {
    String id;
    float balance;
    int transactionCount;
    String name;

    public BankAccount(String id, float balance, String name) {
        this.id = id;
        this.balance = balance;
        this.transactionCount = 0;
        this.name = name;
    }

    public void readAccountDetails() {
        Scanner b = new Scanner(System.in);
        System.out.println("Enter name");
        name = b.nextLine();
        System.out.println("Enter id");
        id = b.nextLine();
        System.out.println("Enter balance");
        balance = b.nextFloat();
    }

    String getAccountDetails() {
        return ("ID:" + id + "Balance:" + balance + "Name:" + name);
    }

    void deposit(float amount) {
        balance = balance - amount;
        transactionCount++;
    }

    public static void main(String[] args) {
        BankAccount a1 = new BankAccount("null", 1000, "");
        a1.readAccountDetails();
        System.out.println("Details \n" + a1.getAccountDetails());
        a1.deposit(50);
        a1.getAccountDetails();
        a1.getAccountDetails();
    }

}
