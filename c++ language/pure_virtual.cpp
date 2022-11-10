//A pure virtual function is declared by assigning 0 in declaration
#include<iostream>
using namespace std;
class Base
{
    public:
        virtual void display()=0;//abstract class no body
};
class Derived:public Base
{
    public:
        void display()
        {
            cout<<"Derived class is invoked"<<endl;
        }
};
int main()
{
    Derived d;
    d.display();
}