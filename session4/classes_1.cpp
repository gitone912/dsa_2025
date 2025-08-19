#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int uid;
        string clg="ICFAI";

        void display_name(){
            cout<<"the student's name is "<<name<<endl;
        }
        void display_uid(){
            cout<<"uid is "<<uid<<endl;
        }
};

int main(){
    Student s1;
    s1.name="akash";
    s1.uid= 4011;
    s1.display_name();
    s1.display_uid();

    Student s2;
    cout<<"enter you name"<<endl;
    cin>>s2.name;
    // s2.name="neha";
    s2.uid=1012;
    s2.display_name();
    s2.display_uid();
    s2.clg="sbu";

    cout<<s2.clg<<endl;
}