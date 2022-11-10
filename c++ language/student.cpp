#include<iostream>
#include<cstring>
using namespace std;
class Student
{
    string str,grade;
    int maths,english,science,total;
    float per;
    public:
    void getval()
    {
        cout<<"\n name :";
        getline(cin,str);
        cout<<"\n maths :";
        cin>>maths;
        cout<<"\n english :";
        cin>>english;
        cout<<"\n science :";
        cin>>science;
    }
    void docalculate()
    {
        total=maths+english+science;
        cout<<"\n total marks :"<<total;
        per=total/3;
        cout<<"\n per :"<<per;
        if(per>=70)
        {
            cout<<"\n grade a";
        }
        else if(per<70 && 60<=per)
        {
            cout<<"\n grade b";
        }
        else if(per<60 && 50<=per)
        {
            cout<<"\n grade c";
        }
        else if(per<50 && 40<=per)
        {
            cout<<"\n grade d";
        }
        else
        {
            cout<<"\n fail";
        }
    }
};
int main()
{
    Student obj1;
    obj1.getval();
    obj1.docalculate();
}