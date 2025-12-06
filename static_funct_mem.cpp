#include<bits/stdc++.h>
using namespace std;

class Teachers{
    public:
    static int total_teachers;
    string name;

    Teachers(string n){
        name=n;
        total_teachers++;
    }

    void showname(){
        cout<<"Name:"<<name<<endl;
    }

    static void totalcnt(){
        cout<<"total_teachers="<<total_teachers<<endl;
    }

};
int Teachers:: total_teachers=0;
int main(){
    Teachers t1("Rohit");
    Teachers t2("Virat");
    Teachers t3("Dhoni");
    t1.showname();
    t2.showname();
    t3.showname();
    Teachers::totalcnt();
    
    
}