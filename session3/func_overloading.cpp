#include <iostream>
using namespace std;    

int z = 30; //global variable

int plusFunc(int a) {
    int z=80; //local variable
    int y=40;
    cout << "Integer version called" << endl;
    return a + 10 + z;
}

double plusFunc(double b) {
    cout << "Double version called" << endl;
    return b + 10.3;
}

int main(){
    int intResult = plusFunc(5);
    double doubleResult = plusFunc(5.5);

    cout << "Integer result: " << intResult << endl;
    cout << "Double result: " << doubleResult << endl;

    return 0;
}