#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            // break;  // Exit the loop when i is 3
            continue;
        }
        cout << "Iteration: " << i << endl;
    }

    cout << "Loop exited." << endl;

    return 0;
}
