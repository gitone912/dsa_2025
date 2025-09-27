#include <iostream>
using namespace std;
void func(int x)
{
    x = x + 10;
    cout << x;
}
int main()
{
    int n;
    cout << "enter any no. n";
    cin >> n;

    func(n);
}
