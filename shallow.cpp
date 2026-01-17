#include <iostream>
using namespace std;

class Student{
    public:
    int *age;

    Student(int a){
        age=new int;
        *age=a;
    }

};

int main(){
    Student s1(10);
    Student s2=s1;

    cout<<*s1.age<<endl;
    cout<<*s2.age<<endl;

    *s2.age=25;
    
    cout<<*s1.age<<endl;
    cout<<*s2.age<<endl;
}