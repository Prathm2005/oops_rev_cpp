#include<bits/stdc++.h>
using namespace std;

class Bankaccount{
    int acntnumber;
    double balance;
    int generateAccountNumber() {
        static int nextAccountNumber = 1000; 
        return nextAccountNumber++;
    }
    public:

    Bankaccount() {
        acntnumber = generateAccountNumber(); 
        balance = 1000.0; 
    }

    void deposit(double amount){
        if(amount>0){
            balance+=amount;
            // cout<<"deposit:"<<balance<<endl;
        }
        else{
            cout<<"invalid amount"<<endl;
        }
    }
    void display(){
        cout<<"Acntnumber:"<<acntnumber<<" ";
        cout<<"balance:"<<balance<<" ";
    }
};

int main() {
  Bankaccount b1;
  b1.deposit(300);
  b1.display();
}