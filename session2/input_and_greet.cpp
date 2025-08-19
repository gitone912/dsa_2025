#include <iostream>
#include <string>
using namespace std;

void greet(string name){
    cout<<"good morning"<<" "<<name<<endl;
}

int main(){

    string name[4];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter name " << i + 1 << ": ";
        cin >> name[i];
        greet(name[i]);
    }


}