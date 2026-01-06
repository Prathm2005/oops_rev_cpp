#include<bits/stdc++.h>
using namespace std;

class Human{
    protected:
    string name;
    int age;
    string language;

    void move(){
        cout<<"Human can move"<<endl;
    }
};

class Teacher:public Human{
    public:
    string course;
    Teacher(string name,int age,string course){
        this->name=name;
        this->age=age;
        this->course=course;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<course<<endl;
    }
};

class Student:public Human{
    public:
    string std;

    Student(string name, int age, string std){
        this->name=name;
        this->age=age;
        this->std=std;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<std<<endl;
    }
};

int main(){
    Student s1("Rohit Sharma",34,"4th Year");
    s1.display();
    Teacher t1("Rohan Mane",45,"CSE");
    t1.display();

}