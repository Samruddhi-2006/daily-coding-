#include <iostream>
using namespace std;

class BankAccount {

private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
  
    BankAccount(string name, int accNo, double bal) {
        accountHolder = name;
        accountNumber = accNo;
        balance = bal;
    }
    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
            cout << "Deposit Successful ✅\n";
        } else {
            cout << "Invalid Amount ❌\n";
        }
    }
    void withdraw(double amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal Successful ✅\n";
        } else {
            cout << "Insufficient Balance ❌\n";
        }
    }
    double getBalance() {
        return balance;
    }

    void display() {
        cout << "\nAccount Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: ₹" << balance << endl;
    }
};

int main() {

    BankAccount acc1("Samruddhi", 12345, 5000);

    acc1.display();

    acc1.deposit(2000);
    acc1.withdraw(1500);

    cout << "\nUpdated Balance: ₹" << acc1.getBalance() << endl;

    return 0;
}
