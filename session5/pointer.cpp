#include <iostream>

using namespace std;

int main() {
    int var = 10;
    string name="nehah";

    // declare pointer and store address of x
    int* p = &var;

    string* n = &name;

    // print value and address
    cout << "Value of x: " << var << endl;


    cout<<"string pointer "<<&name<<endl;

    cout<<"string n "<<n<<endl;

    return 0;
}