//Hybrid Inheritance
#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"\n A Constructer ";
    }
};
class B:public A
{
    public:
    B()
    {
        cout<<"\n B constructor..";
    }
};
class C
{
    public:
    C()
    {
        cout<<"\n C constructor...";
    }
};
class D:public B,public C
{
    public:
    D()
    {
        cout<<"\n D constructor..";
    }
};
int main()
{
    D d;
}
