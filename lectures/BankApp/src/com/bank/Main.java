package com.bank;

import com.bank.accounts.SavingsAccount;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get input for Savings Account
        System.out.println("Enter initial balance for Savings Account: ");
        double savingsInitialBalance = scanner.nextDouble();
        System.out.println("Enter interest rate for Savings Account: ");
        double savingsInterestRate = scanner.nextDouble();
        SavingsAccount savings = new SavingsAccount(savingsInitialBalance, savingsInterestRate);

        boolean continueOperations = true;

        while (continueOperations) {
            System.out.println("\nSelect account to operate on:");
            System.out.println("1. Savings Account");
            System.out.println("2. Exit");
            int choice = scanner.nextInt();

            switch (choice) {
                case 1:
                    handleSavingsAccountOperations(scanner, savings);
                    break;
                case 2:
                    handleCurrentAccountOperations(scanner, current);
                    continueOperations = false;
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
            }
        }

        scanner.close();
    }

    private static void handleSavingsAccountOperations(Scanner scanner, SavingsAccount savings) {
        System.out.println("\nSavings Account Balance: " + savings.getBalance());
        System.out.println("1. Deposit");
        System.out.println("2. Withdraw");
        System.out.println("3. Apply Interest");
        System.out.println("4. Back to Main Menu");
        int choice = scanner.nextInt();

        switch (choice) {
            case 1:
                System.out.println("Enter amount to deposit: ");
                double deposit = scanner.nextDouble();
                savings.deposit(deposit);
                System.out.println("New Balance: " + savings.getBalance());
                break;
            case 2:
                System.out.println("Enter amount to withdraw: ");
                double withdraw = scanner.nextDouble();
                savings.withdraw(withdraw);
                System.out.println("New Balance: " + savings.getBalance());
                break;
            case 3:
                savings.applyInterest();
                System.out.println("Balance after interest applied: " + savings.getBalance());
                break;
            case 4:
                break;
            default:
                System.out.println("Invalid choice. Please try again.");
        }
    }

}
