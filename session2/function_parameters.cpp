#include <iostream>
#include <string>
using namespace std;


void greet(string name){
    cout<<"good morning gadhi"<<" "<<name<<endl;
}

void bday(int age){
    cout<<"happiest"<<" "<<age<<" th"<<" bday"<<endl;
}

int main(){
    string name="neha";
    greet(name);
    bday(18);

    return 0;

}
