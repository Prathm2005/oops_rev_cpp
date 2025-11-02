#include<bits/stdc++.h>
using namespace std;

class Human{
    public:

    void move(){
        cout<<"Human can move"<<endl;
    }
};

class Teacher:public Human{
    public:
    string name;
    int age;

    void move(){
        cout<<"Teacher can move"<<endl;
    }

};

class Student:public Teacher{
    public:

    string branch; 
    string course;

    Student(string name,int age,string branch,string course){
        this->name=name;
        this->age=age;
        this->branch=branch;
        this->course=course;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<branch<<" "<<course<<endl;
    }
};

int main(){
    Student s1("Rohit",45,"Btech","CSE");
    s1.display();
    // s1.move();
    s1.Human::move();
}