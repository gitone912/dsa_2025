#include <iostream>

using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << ": " << numbers[i] << endl;
    }

    // int myNumbers[] = {10, 20, 30, 40, 50};
    // int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    // cout << getArrayLength;


    string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
    };

    string letters2[2][2][2] = {
    {
        { "A", "B" },
        { "C", "D" }
    },
    {
        { "E", "F" },
        { "G", "H" }
    }
    };


    return 0;
}
