//Multiple inheritance
#include<iostream>
using namespace std;
class Tatacompany
{
    public:
        Tatacompany()
        {
            cout<<"wellcome To My Company"<<endl;
        }
};
class Employee
{
    protected:
        int  index;
        string name;
    public:
        Employee()
        {
            cout<<endl<<"Welcome to Employee's Information Table"<<endl;
            cout<<"-------------------------------------"<<endl;
        }
        int EnterData()
        {
            cout<<"Employee Index :";
            cin>>index;
            cout<<"Employee Name :";
            cin>>name;
        }
        void GetData()  
        {
            cout<<endl<<"Employee Index :"<<index<<endl;
            cout<<"Employee Name :"<<name<<endl;
        }
};
class Salary: public Tatacompany,public Employee
{
        float basic,da,hra,gross_salary;
 
    public:
        void PutData()
        {
            cout<<"Enter Employee Salary :";
            cin>>basic;
            if(basic<=5000)
            {
                da=(basic*8)/100;
                hra=(basic*15)/100;
            }
            else if(5000<basic && basic<=10000)
            {
                da=(basic*12)/100;
                hra=(basic*18)/100;
            }
            else if(10000<basic && basic<=15000)
            {
                da=(basic*15)/100;
                hra=(basic*20)/100;
            }
            else
            {
                da=(basic*17)/100;
                hra=(basic*22)/100;
            }
            gross_salary=basic+da+hra;
        }
        void OutData()
        {
            cout<<"Employee Salary :"<<basic<<endl;
            cout<<"Gross Salary of Employee :"<<gross_salary;
        }
};
int main()
{
    Salary a;
    a.EnterData();
    a.PutData();
    a.GetData();
    a.OutData();
}