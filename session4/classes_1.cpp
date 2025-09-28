#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int uid;
        string clg="ICFAI";

        Student(string x, int y){
            name = x;
            uid= y;
            cout<<"this will be called automatically"<<endl;
        }

        void display_name(int a){
            cout<<"the student's name is "<<name<<endl;
        }
        void display_uid(){
            cout<<"uid is "<<uid<<endl;
        }


};

int main(){
    Student s1("akash",4011);
    Student s2("neha",1012);
    // s1.name="akash";
    // s1.uid= 4011;
    s1.display_name(7);
    s1.display_uid();

}