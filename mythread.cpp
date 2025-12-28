#include<bits/stdc++.h>
#include <thread>
using namespace std;

void task(){
    cout<<"Thread Running"<<endl;
}

int main(){
    std::thread t(task);
    t.join();
}