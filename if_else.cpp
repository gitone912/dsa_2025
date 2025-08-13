#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } 
    else if(age>=16 && age<18) {
        cout << "You are on the verge of adulthood." << endl;
    }
    else {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}
