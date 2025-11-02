#include<bits/stdc++.h>
using namespace std;


class Student{
    string name;
    int age;
    string course;
    public:
    void setMthd(string name,int age,string course){
        this->name=name;
        this->age=age;
        this->course=course;
    }

    void getMthd(){
        cout<<name<<" "<<age<<" "<<course<<endl;
    }
};
int main(){
    Student s1;
    s1.setMthd("Rohit",45,"Btech");
    s1.getMthd();
}