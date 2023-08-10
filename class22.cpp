#include <iostream>
#include <string>

class BankAccount {
private:
    std::string depositorName;
    int accountNumber;
    std::string accountType;
    double balance;

public:
    
    void assignValues(const std::string& name, int accNumber, const std::string& accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    
    void deposit(double amount) {
        balance += amount;
        std::cout << "Amount " << amount << " deposited successfully.\n";
    }

    
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Amount " << amount << " withdrawn successfully.\n";
        } else {
            std::cout << "Insufficient balance. Withdrawal failed.\n";
        }
    }

    
    void display() {
        std::cout << "Depositor Name: " << depositorName << std::endl;
        std::cout << "Account Balance: " << balance << std::endl;
    }
};

int main() {
    BankAccount account;
    account.assignValues("AKSHAY", 123456, "Savings", 5000.0);

    account.display();

    account.deposit(2000.0);
    account.display();

    account.withdraw(3000.0);
    account.display();

    account.withdraw(10000.0);
    account.display();

   
}

