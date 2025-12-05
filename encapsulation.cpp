#include<bits/stdc++.h>
using namespace std;

class Student{
    string name;
    int age;
    
    public:

    void setname(string n){
        name=n;
    }
    void setage(int n){
        if(n>0){
            age=n;
        }
        else{
            cout<<"invalid age entered.."<<endl;
        }
    }
 
    void getname(){
        cout<<"Name:"<<name<<endl;
    }
    void getage(){
        cout<<"Age:"<<age<<endl;
    }
};

int main(){
    Student s1;
    s1.setname("Rohit Sharma");
    s1.setage(6);
    s1.getname();
    s1.getage();
}