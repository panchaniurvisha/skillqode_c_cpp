#include<iostream>
using namespace std;
class A{
    int n;
    public:
    A(int i)
    {
        n=i;
        cout<<"\n A constructor called...."<<n;
    }
    ~A()
    {
        cout<<"\n A destructor called..."<<n;
    }
};
int main()
{
    A a1(1),a2(2),a3(3);
}