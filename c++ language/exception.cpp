//EXCEPTION HANDLING
#include<iostream>
using namespace std;
double zerodivision(int x,int y)
{
    if(y==0)
    {
       throw "DIVISION BY ZERO";
    }
return (x/y);
}
int main()
{
    cout<<"\n begin main";
    int a=1;
    int b=0;
    double c=0;
    try
    {
        c=zerodivision(a,b);
    }
    catch(const char * message)
    {
        cerr<<"\n\t"<<message<<endl;
    }
    cout<<"\n end main";
    return 0;
}