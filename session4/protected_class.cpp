#include <iostream>
using namespace std;

class Person {
protected:
    string name;   // Protected member
};

class Student : public Person {
public:
    void setName(string n) {
        name = n;  // Accessible here (derived class)
    }
    void display() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s;
    s.setName("Akash");
    s.display();
    // s.name = "Hello"; ❌ Not allowed (protected outside class)
}