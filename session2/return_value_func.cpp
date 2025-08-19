#include <iostream>
using namespace std;

int add(int a, int b) {
    int c = a+b;
    return a+b;
}

string fullName(string first, string last) {
    return first + " " + last + " is a good person";
}

int main() {
    int sum = add(5, 10);
    cout << "Sum: " << sum << endl;

    string name = fullName("anshul", "taklu");
    string name2 = fullName("gadhi", "neha");
    string name3 = fullName("pagli", "shagufta");
    cout << "Full Name: " << name << endl;
    cout << "Full Name: " << name2 << endl;
    cout << "Full Name: " << name3 << endl;

    return 0;
}