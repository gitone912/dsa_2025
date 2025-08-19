#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance=70;   // Hidden from outside

public:
    void setBalance(int b) {
        balance = b;
    }
    void showBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc;
    // acc.balance = 5000; ❌ Not allowed (private)
    acc.setBalance(5000); // Allowed (via public function)
    acc.showBalance();
}