#include <iostream>
using namespace std;



void printTable(int n, int i) {
    if (i > 10) {
        return;
    }

    cout << n << " x " << i << " = " << n * i << endl;

    // Recursive call
    printTable(n, i + 1);
}

int main() {
    printTable(3, 1);  // Start from 1
    return 0;
}