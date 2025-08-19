#include <iostream>
#include <string>
using namespace std;


void greetBday(string name, int age, int year=2006){
    cout<<"happy bday gadhi"<<" "<<name<<endl;
    cout<<"happiest"<<" "<<age<<" th"<<" bday "<< year<<endl;
} 


int main(){
    greetBday("neha",19,2025);
    return 0;

}
