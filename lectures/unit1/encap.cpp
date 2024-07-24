
#include <iostream> // Include the input-output stream library
using namespace std; // Use the standard namespace

// Define the BankAccount class
class BankAccount {
private:
    double balance; // Private member variable to store the account balance
    
public:
    // Constructor to initialize the balance with the provided initial balance
    BankAccount(double initialBalance) : balance(initialBalance) {}
    
    // Member function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) { // Check if the deposit amount is positive
            balance += amount; // Add the deposit amount to the balance
        }
    }
    
    // Member function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) { // Check if the withdrawal amount is positive and less than or equal to the balance
            balance -= amount; // Subtract the withdrawal amount from the balance
        }
    }
    
    // Member function to check the current balance of the account
    double getBalance() {
        return balance; // Return the current balance
    }
};

// Main function to demonstrate the usage of the BankAccount class
int main() {
    BankAccount myAccount(1000); // Create a BankAccount object with an initial balance of 1000
    cout << "Current balance: " << myAccount.getBalance() << endl; // Output the current balance
    
    myAccount.deposit(500); // Deposit 500 into the account
    cout << "Current balance: " << myAccount.getBalance() << endl; // Output the current balance
    
    myAccount.withdraw(200); // Withdraw 200 from the account
    cout << "Current balance: " << myAccount.getBalance() << endl; // Output the current balance
    return 0; // Return 0 to indicate successful execution
}
