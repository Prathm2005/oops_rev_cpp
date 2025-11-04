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

class Teacher:public Human{
    public:
    string course;

    void move(){
        cout<<"Student can move"<<endl;
    }
};
class Student:public Teacher{
    public:
    string dept;

    Student(string name,int age,string course,string dept){
        this->name=name;
        this->age=age;
        this->course=course;
        this->dept=dept;
    }

    void display(){
        cout<<"Name:"<<name<<" ";
        cout<<"Age:"<<age<<" ";
        cout<<"Course:"<<course<<" ";
        cout<<"Dept:"<<dept<<" ";
    }
};
int main(){
    Student s1("Rohan",22,"BTECH","CSE");
    s1.display();
 
    
   
}