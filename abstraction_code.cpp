#include <iostream>
using namespace std;

class BankAccount{
    public:
    virtual void deposite(double amount)=0;
    virtual void withdraw(double amount)=0;
};

class Savingaccount:public BankAccount{
    private:
    double balance;

    public:
    Savingaccount(){
        balance=0;
    }

    void deposite(double amount){
        balance+=amount;
        cout<<"Deposited: "<<amount<<" "<<"Balance: "<<balance<<endl;
    }

    void withdraw(double amount){
        if(amount<=balance){
            balance-=amount;
            cout<<"Withdrawn: "<<amount<<" "<<"Balance: "<<balance<<endl;
        }
        else{
            cout<<"your Balance is insufficient...."<<endl;
        }
    }
};

int main(){
    Savingaccount* money=new Savingaccount();
    money->deposite(2000);
    money->withdraw(1000);
    money->withdraw(1100);
}