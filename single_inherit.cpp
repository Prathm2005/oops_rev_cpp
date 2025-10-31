#include<bits/stdc++.h>
using namespace std;


 class Human{
    protected:
    string name;
    int age;
    public:
     void move(){
        cout<<"human can move"<<endl;
    }
};

class Student:public Human{
    public:
    string course;

    Student(string name,int age,string course){
        this->name=name;
        this->age=age;
        this->course=course;
    }
    void move(){
        cout<<"Student can move"<<endl;
    }

    void display(){
        cout<<"Name:"<<name<<" ";
        cout<<"Age:"<<age<<" ";
        cout<<"Course:"<<course<<" ";
    }
};
int main(){
    Student s1("Rohan",22,"CSE");
    s1.display();
 
    
   
}