//Multiple Inheritance....
#include<iostream>
using namespace std;
class B1
{
    public:
    B1()
    {
        cout<<"\n B1 constructor .....";
    }
};
class B2
{
    public:
    B2()
    {
        cout<<"\n B2 constructor......";
    }
};
class B3
{
    public:
    B3()
    {
        cout<<"\n B3 constructor.......";
    }
};
class B:public B1,public B2,public B3
{
    public:
    B()
    {
        cout<<"\n B constructor.......";
    }
};
int main()
{
        B b;
}
