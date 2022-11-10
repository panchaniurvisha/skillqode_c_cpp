//runtime_polimorphism
#include<iostream>
using namespace std;
class Base
{
    public:
        virtual void display()
        {
            cout<<"base class is invoked"<<endl;
        }
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
    //Derived d;
    //d.display();
    Base *p,b;
    Derived d;
    p=&b; //Base
    p->display(); //point to
    p=&d;  
    p->display();
    //Base b;
    //b.display();
}