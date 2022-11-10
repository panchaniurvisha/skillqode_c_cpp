//hierarchical inheritance...
#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"\n A constructor.....";
    }
};
class B:public A
{
    public:
    B()
    {
        cout<<"\n B constructor......";
    }
};
class C:public A
{
    public:
    C()
    {
        cout<<"\n C constructor......";
    }
};
class D:public A
{
    public:
    D()
    {
        cout<<"\n D constructor......";
    }
};
int main()
{
    D d;
}
