#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string name;
    float balance;

public:
    void createAccount() {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Amount deposited successfully\n";
    }

    void withdraw() {
        float amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if(amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful\n";
        } 
        else {
            cout << "Insufficient balance\n";
        }
    }

    void display() {
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance << endl;
    }
};

int main() {

    BankAccount acc;
    int choice;

    do {

        cout << "\n1. Create Account";
        cout << "\n2. Deposit";
        cout << "\n3. Withdraw";
        cout << "\n4. Display";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";

        cin >> choice;

        switch(choice) {
            case 1: acc.createAccount(); break;
            case 2: acc.deposit(); break;
            case 3: acc.withdraw(); break;
            case 4: acc.display(); break;
            case 5: cout << "Program End\n"; break;
            default: cout << "Invalid choice\n";
        }

    } while(choice != 5);

    return 0;
}
