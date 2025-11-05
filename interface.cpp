#include<bits/stdc++.h>
using namespace std;


class Shape{
    public:
    virtual void draw()=0;

};

class Circle:public Shape{
    public:

    void draw() override{
        cout<<"Circle can be drawn"<<endl;
    }
};

class Square:public Shape{
    public:
    void draw() override{
        cout<<"Square can be drawn"<<endl;
    }
};
int main(){
    Shape *s1;
    s1=new Circle();
    s1->draw();
}