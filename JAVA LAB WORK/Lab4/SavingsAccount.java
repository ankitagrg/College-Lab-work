package Lab4;

class SavingsAccount extends BankAccount implements Transaction {
    private double interestRate;

    public SavingsAccount(String accountNumber, double balance, double interestRate) {
        super(accountNumber, balance);
        this.interestRate = interestRate;
    }

    @Override
    public void performAccountMaintenance() {
        System.out.println("Performing savings account maintenance.");
        // Add any specific maintenance operations for savings account
    }

    @Override
    public double deposit(double amount) {
        balance += amount;
        return balance;
    }

    @Override
    public double withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return balance;
        } else {
            System.out.println("Insufficient funds!");
            return balance;
        }
    }

    public void applyInterest() {
        double interestEarned = balance * interestRate / 100;
        balance += interestEarned;
        System.out.println("Interest of $" + interestEarned + " applied. New balance: $" + balance);
    }
}
