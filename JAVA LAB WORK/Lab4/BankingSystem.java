package Lab4;

public class BankingSystem {
    public static void main(String[] args) {
        SavingsAccount savingsAccount = new SavingsAccount("S123456", 1000.0, 5.0);

        savingsAccount.displayAccountInfo();

        savingsAccount.deposit(500.0);
        savingsAccount.displayAccountInfo();

        savingsAccount.withdraw(200.0);
        savingsAccount.displayAccountInfo();

        savingsAccount.applyInterest();
        savingsAccount.displayAccountInfo();

        savingsAccount.performAccountMaintenance();
    }
}
