
package com.bank.accounts;

public interface Account {
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance();
}
