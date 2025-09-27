#include <iostream>
using namespace std;

// Define a structure
struct Student {
    int id;
    string name;
    float grade;
};

int main() {
    // Create a structure variable
    Student s1;
    Student s2;

    // Assign values
    s1.id = 101;
    s1.name = "Alice";
    s1.grade = 89.5;

    s2.id =102;

    // Display values
    cout << "Student ID: " << s1.id << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Grade: " << s1.grade << endl;

    return 0;
}
