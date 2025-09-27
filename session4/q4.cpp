#include <iostream>
using namespace std;

int main()
{
    string arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "enter " << i << "th student name" << endl;
        cin >> arr[i];
    }
    for (int j = 0; j < 5; j++)
    {
        cout << "student" << j << "name is" << " " << arr[j] << endl;
    }
}