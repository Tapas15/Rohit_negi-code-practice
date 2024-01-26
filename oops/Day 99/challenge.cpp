#include<iostream>
using namespace std;

class Customer {
public:
    string name;
    int accountNumber;
    double accountBalance;
    bool isActive;

    void deposit(double amount) {
        if (isActive) {
            accountBalance += amount;
            cout << "Amount deposited." << endl;
        } else {
            cout << "Account is not active." << endl;
        }
    }

    void withdraw(double amount) {
        if (isActive) {
            accountBalance -= amount;
            cout << "Amount withdrawn." << endl;
        } else {
            cout << "Account is not active." << endl;
        }
    }

    void transfer(double amount, Customer& targetAccount) {
        if (isActive) {
            accountBalance -= amount;
            targetAccount.deposit(amount);
            cout << "Amount transferred." << endl;
        } else {
            cout << "Account is not active." << endl;
        }
    }

    void printDetails() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << accountBalance << endl;
    }
};

int main() {
    Customer c1;
    c1.name = "Rohit";
    c1.accountNumber = 123456789;
    c1.accountBalance = 10000;
    c1.isActive = true;

    cout << "Initial details:" << endl;
    c1.printDetails();

    c1.deposit(1000);
    cout << "Updated balance after deposit: " << c1.accountBalance << endl;

    c1.withdraw(1000);
    cout << "Updated balance after withdrawal: " << c1.accountBalance << endl;

    Customer targetAccount;
    targetAccount.name = "Target";
    targetAccount.accountNumber = 987654321;
    targetAccount.accountBalance = 5000;
    targetAccount.isActive = true;

    c1.transfer(2000, targetAccount);
    cout << "Updated balance after transfer: " << c1.accountBalance << endl;
    cout << "Target account balance after transfer: " << targetAccount.accountBalance << endl;

    cout << "Final details:" << endl;
    c1.printDetails();
    targetAccount.printDetails();

    return 0;
}
