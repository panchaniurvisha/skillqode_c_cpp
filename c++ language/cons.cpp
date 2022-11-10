#include <iostream>
using namespace std;
class bank
{
    int accountbalance, withdrawbalance,deposite_balance,reminder_balance,total_balance;

public:
    bank()
    {
        accountbalance = 1000;
        //cout << "\n default constructor called..";
    }
    bank(int initbal)
    {
        accountbalance = initbal;
        //cout << "\n parameterlized constructor called...";
    }
    void showaccountbalance()
    {
        cout <<"\n account balance :=" << accountbalance;
        wdbalance();
    }
    void wdbalance()
    
    {
        cout <<"\n enter withdrawbalance :=";
        cin >>withdrawbalance;
        reminder_balance = accountbalance - withdrawbalance;
        cout <<"\n reminder balance :=" <<reminder_balance;
        cout<<"\n enter deposite balance :=";
        cin>>deposite_balance;
        total_balance=reminder_balance+deposite_balance;
        cout<<"\n total_balance :="<<total_balance;
    }
};
int main()
{
    bank person1(1500), person2(5000), person3;
    person1.showaccountbalance();
    person2.showaccountbalance();
    person3.showaccountbalance();
}