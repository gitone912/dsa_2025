#include <iostream>
using namespace std;

void myFunction(int num[]) {

  for (int i = 0; i < 5; i++) {
    cout << num[i] << "\n";
  }

}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    myFunction(arr);
    return 0;

}