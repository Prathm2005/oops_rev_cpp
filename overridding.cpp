#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
     virtual void move(){
        cout<<"Human moving"<<endl;
    }
};

class Student: public Human{
    public:
    void move() override {
        cout<<"Student moving"<<endl;
    }
};
int main(){
   Human *h1;
   h1=new Student();
   h1->move(); // runtime overriding
}


