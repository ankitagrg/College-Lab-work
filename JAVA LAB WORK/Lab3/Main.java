package Lab3;

class BankAccount {
    protected String accountNumber;
    protected String accountHolder;
    protected double balance;

    public BankAccount(String accountNumber, String accountHolder, double balance) {
        this.accountNumber = accountNumber;
        this.accountHolder = accountHolder;
        this.balance = balance;
    }

    public void deposit(double amount) {
        balance += amount;
        System.out.println("Deposit: $" + amount);
    }

    public void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            System.out.println("Withdrawal: $" + amount);
        } else {
            System.out.println("Insufficient funds");
        }
    }

    public void displayBalance() {
        System.out.println("Account Number: " + accountNumber);
        System.out.println("Account Holder: " + accountHolder);
        System.out.println("Balance: $" + balance);
    }
}

class SavingsAccount extends BankAccount {
    private double interestRate;

    public SavingsAccount(String accountNumber, String accountHolder, double balance, double interestRate) {
        super(accountNumber, accountHolder, balance);
        this.interestRate = interestRate;
    }

    public void addInterest() {
        double interest = balance * (interestRate / 100);
        balance += interest;
        System.out.println("Interest added: $" + interest);
    }
}

class CheckingAccount extends BankAccount {
    private double overdraftLimit;

    public CheckingAccount(String accountNumber, String accountHolder, double balance, double overdraftLimit) {
        super(accountNumber, accountHolder, balance);
        this.overdraftLimit = overdraftLimit;
    }

    @Override
    public void withdraw(double amount) {
        if (balance - amount >= -overdraftLimit) {
            balance -= amount;
            System.out.println("Withdrawal: $" + amount);
        } else {
            System.out.println("Overdraft limit exceeded");
        }
    }
}

public class Main {
    public static void main(String[] args) {
        // Create a savings account //
        SavingsAccount savingsAccount = new SavingsAccount("0029837000002343", "Ankita", 50000.0, 5.0);
        savingsAccount.displayBalance();
        savingsAccount.deposit(500.0);
        savingsAccount.addInterest();
        savingsAccount.displayBalance();

        System.out.println();

        // Create a checking account //
        CheckingAccount checkingAccount = new CheckingAccount("0098735725345456", "Rishita", 60000.0, 1000.0);
        checkingAccount.displayBalance();
        checkingAccount.withdraw(1500.0);
        checkingAccount.displayBalance();
        checkingAccount.withdraw(2000.0);
    }
}
