#include<bits/stdc++.h>
using namespace std;

class Complex{
    public:
    int real,img;

    Complex(int r,int i){
        real=r;
        img=i;
    }

    Complex operator *  (Complex c){
        return Complex(real*c.real, img*c.img);
    }
};

int main(){
    Complex c1(2,3);
    Complex c2(4,5);
    Complex c3=c1*c2;

    cout<<c3.real<<" "<<c3.img<<"i";
}