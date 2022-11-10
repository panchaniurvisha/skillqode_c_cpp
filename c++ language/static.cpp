//static
#include<iostream>
using namespace std;
class Statcout
{ 
    public:
    static int stcount;
    void SetCount(int n)
    {
        stcount=n;
    }
    void Counter()
    {
        stcount++;
    }
    void GetCount()
    {
        cout<<"\n"<<stcount;
    }
};
int Statcout::stcount=0;
int main()
{
    Statcout obj1,obj2,obj3;
    obj1.SetCount(10);
    obj3.Counter();
    //obj1.GetCount();
    obj1.GetCount();
    cout<<"\n static :"<<Statcout::stcount;
    //cout<<"\n static:"<<stcount;
}