#include <iostream>
using namespace std;

class Student{
    public:
    
    int *age;

    Student(int a){
        age= new int;
        *age=a;
    }

    Student(const Student&s){
        age=new int;
        *age= *(s.age);
    }

    ~Student(){
        delete age;
    }
};


int main(){

    Student s1(20);
    Student s2=s1;

    cout<<*s1.age<<endl; 
    cout<<*s2.age<<endl; 

    *s2.age=25;

    cout<<*s1.age<<endl; 
    cout<<*s2.age<<endl;

}