#include <iostream>
#include <string>
using namespace std;

int main(){
    string food = "Pizza";  // A food variable of type string
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    int uid = 345;

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    cout <<"uid "<< &uid <<endl;

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    cout<< sizeof(food);
}

