//Bank using Hybrid
#include<iostream>
using namespace std;
class Bank
{
};
class Saving : public Bank
{
        int bal=1000;

    public:
        void Sdeposite(int x)
        {
            bal = bal + x;
            cout<<"Deposite Amount :"<<x<<endl;
        }
        void Swithdraw(int y)
        {
            if(bal<y)
            {
                cout<<"you have not an amount :"<<endl;
            }
            else
            {
                bal = bal - y;
                cout<<"your Withdraw Amount :"<<y<<endl;
            }
        }
        void Sshowbalance()
        {
            cout<<"Show balance :"<<bal<<endl;
        }
};
class Current :public Bank
{  
        int balance=10000;

    public:
        void Cdeposite(int x)
        {
            balance = balance + x;
            cout<<"Deposite Amount :"<<x<<endl;
        }
        void Cwithdraw(int y)
        {
            if(balance<y)
            {
                cout<<"you have not an amount :"<<endl;
            }
            else
            {
                balance = balance - y;
                cout<<"your Withdraw Amount :"<<y<<endl;
            }
        }
        void Cshowbalance()
        {
            cout<<"Show balance :"<<balance<<endl;
        }
};
class Person : public Saving, public Current
{
     protected:
        char name[30];
        int Ac_no;
    public:
        char ac_type[20];
        void SetData()
        {
            cout<<"Account Holder Name :";
            cin>>name;
            cout<<"Acount Number :";
            cin>>Ac_no;
        }
        void GetData()
        {
            cout<<"Account Holder Name :"<<name<<endl;
            cout<<"Acount Number :"<<Ac_no<<endl;
        }
};
int main()
{
    Person p;
    Saving s;
    Current c;
    p.SetData();
    p.GetData();
    int ch,b;
    char a;
    cout<<"----------------NOTE-----------------"<<endl<<endl<<"Choice For Bank Account Type --Write Saving Account For S or s and Current For C or c"<<endl;
    cout<<"bank Account Type :";
    cin>>a;
    if(a=='s' || a=='S')
    {
        while(ch !=4)
        {
            cout<<"1.Deposite Amount"<<endl;
            cout<<"2.Withdraw Amount"<<endl;
            cout<<"3.Show Balance "<<endl;
            cout<<"4.Exit"<<endl;
            cout<<"Enter your choice"<<endl;
            cin>>ch;

            switch(ch)
            {
                case 1:
                    cout<<"deposite:"<<endl;
                    cin>>b;
                    s.Sdeposite(b);
                    break;
                case 2:
                    cout<<"withdraw:"<<endl;
                    cin>>b;
                    s.Swithdraw(b);
                    break;
                case 3:
                    s.Sshowbalance();
                    break;
                case 4:
                    return 0;
                    break;
                default:
                    cout<<"invalid choice"<<endl;
                    break;
            }
        }
    }
    else
    {
        while(ch !=4)
        {
            cout<<"1.Deposite Amount"<<endl;
            cout<<"2.Withdraw Amount"<<endl;
            cout<<"3.Show Balance "<<endl;
            cout<<"4.Exit"<<endl;
            cout<<"Enter your choice"<<endl;
            cin>>ch;

            switch(ch)
            {
                case 1:
                    cout<<"deposite:"<<endl;
                    cin>>b;
                    c.Cdeposite(b);
                    break;
                case 2:
                    cout<<"withdraw:"<<endl;
                    cin>>b;
                    c.Cwithdraw(b);
                    break;
                case 3:
                    c.Cshowbalance();
                    break;
                case 4:
                    return 0;
                    break;
                default:
                    cout<<"invalid choice"<<endl;
                    break;
            }
        }
    }
}