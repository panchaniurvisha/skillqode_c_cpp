#include<iostream>
#include<stdlib.h>
using namespace std;
class Bank
{
    int bal;
public:
    static int total_deposite_amt,total_withdraw_amt,total_trans;
    Bank(int bal)
    {
        total_deposite_amt+=bal;
        this->bal=bal;
    }
    int showbalance()
    {
        return bal;
    }
    int deposit (int deposit)
    {
        total_deposite_amt+=deposit;
        total_trans++;
        bal = bal+deposit;
        return bal;
    }
    int withdraw (int withdraw)
    {
        if(bal>withdraw)
        {
            total_trans++;
            total_withdraw_amt+=withdraw;
            bal=bal-withdraw;
            return bal;
        }
        else
        {
            cout <<"\n cheak your balance !!!!!!";
            return 1;
        }
    }
};
int Bank::total_deposite_amt=0;
int Bank::total_withdraw_amt=0;
int Bank::total_trans=0;


int main()
{
    system("CLS");
    int ch,dp=0,wt;

        Bank a(100),b(200);
        a.deposit(50);
        b.deposit(50);
        b.withdraw(50);

        cout<<"\n total deposit amt:"<<Bank::total_deposite_amt;
        cout<<"\n total deposit amt:"<<Bank::total_withdraw_amt;
        cout<<"\n total no_of transaction:"<<Bank::total_trans;

        cout<<"\nbalance a:"<<a.showbalance();
        cout<<"\nbalance b:"<<b.showbalance();

}
        
