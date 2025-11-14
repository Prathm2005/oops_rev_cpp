#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    static int totalnum;
    string name;

    Student(string n){
        name=n;
        totalnum++;
    }
    void showname(){
        cout<<"Name:"<<name<<endl;
    }
    static void totalcnt(){
        cout<<"Totalcnt:"<<totalnum<<endl;
    }
    

};
int Student::totalnum=0;
int main(){
    Student s1("Rohit");
    Student s2("Rohan");
    s1.showname();
    s2.showname();

    Student::totalcnt();
}