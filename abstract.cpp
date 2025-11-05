#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    virtual void move()=0; // abstarct method..  It does not have any defination only declaration..
     void bark(){
        cout<<"Animal barking"<<endl;  // non abstract method
    }
};


class Dog :public Animal{
    public:
    void move(){
        cout<<"Dog barking"<<endl;
    }
};
int main(){
   Dog d1;
   d1.move();
   d1.bark();
}


