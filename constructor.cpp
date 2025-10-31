#include<bits/stdc++.h>
using namespace std;


class Student{

    string name;
    int age;

    public:
    Student(string name,int age){
        this->name=name;
        this->age=age;
    }

    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
int main(){
    Student s1("Rohit",45);
    s1.display();
}