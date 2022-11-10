#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    string name;
public:
    void read();
    void disply();
};
class Bank : public Person
{
    int accountno;
    string accountType;
public:
    void getAccountDetails();
    void displayDetails();
};
void Person::read()
{
    cout<<"\n Account Holder Name.. ";
    cin>>name;
}
void Person::disply()
{
    cout<<"\n Account Holder Name.. "<<name<<endl;
}
void Bank::getAccountDetails()
{
    cout<<"\n Account Number..";
    cin>>accountno;
    cout<<"\n Account Type.. ";
    cin>>accountType;
}
void Bank::displayDetails()
{
    cout<<" Account Number.."<<accountno<<endl;
    cout<<" Account Type.. "<<accountType<<endl;
}
int main()
{
   Bank b;
   b.read();
   b.getAccountDetails();
   b.disply();
   b.displayDetails();
}
   
