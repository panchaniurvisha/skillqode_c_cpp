#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    char name[20];
public:
    void read()
    {
        cout<<"\n Enter Person Name.. " ;
        cin>>name;
    }
    void display_p()
    {
         cout<<"\n Name.. "<<name<<endl;
    }
};
class Student : public Person
{
    int standard,fees;
public:
    void printinfo()
    {
        cout<<"\n Enter Student Standard.. ";
        cin>>standard;
        cout<<"\n Enter Standard Fees.. ";
        cin>>fees;
    }
    void display_s()
    {
    cout<<" Standard.. "<<standard<<endl;
    cout<<" Fees.. "<<fees<<endl;
    }
};
int main()
{
    Student s;
    s.read();
    s.printinfo();
    s.display_p();
    s.display_s();
}

