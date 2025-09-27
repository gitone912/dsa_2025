#include <iostream>
using namespace std;
int add(int a, int b)
{
    int c = a + b;
    return c;
}

int main()
{
    int n1, n2;
    cout << "enter the first no." << endl;
    cin >> n1;
    cout << "enter the sec no." << endl;
    cin >> n2;
    cout << "sum is" << add(n1, n2);
}