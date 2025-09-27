#include <iostream>
using namespace std;
void table(int a)
{

    int i;
    for (i = 1; i <= 10; i++)
    {

        cout << i * a << endl;
    }
}
int main()
{
    int a;
    cout << "enter any no." << endl;
    cin >> a;
    table(a);
}