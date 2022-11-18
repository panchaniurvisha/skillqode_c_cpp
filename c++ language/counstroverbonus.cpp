#include<iostream>
using namespace std;
class Microsol
{
    char name[50];
    float salary,bonus,total_salary;
    int days,extra_days;
    public:
    Microsol();
    Microsol(float);
    void getdata();
    void showinformation();
};
Microsol::Microsol()
{
    salary=5000;
}
Microsol::Microsol(float initsalary)
{
    salary=initsalary;
}
void Microsol::getdata()
{
    cout<<"\n enter employee name :";
    cin>>name;
    cout<<"Enter salary of Employee=";
    cin>>salary;
    cout<<"Enter working days=";
    cin>>days;
}
void Microsol:: showinformation()
  {
   if(days<=264)
   {
    bonus = 0;
    cout<<"\n bonus :"<<bonus;
   }
    else
    {
        extra_days=days-264;
        bonus=extra_days*1000;
        cout<<"\n bonus :"<<bonus;
    }
   total_salary = salary + bonus;
   cout<<"\n enter employee name:"<<name<<"\n enter yearly salary :"<<salary<<"\n enter days :"<<days<<"\n enter bonus :"<<bonus<<"\n total_salary :"<<total_salary;
}
int main()
{
    Microsol employee[5];
    int i;
    for(i=0;i<2;i++)
    {
        cout<<"\n enter employee information :"<<i+1<<endl;
        employee[i].getdata();
        employee[i].showinformation();
    }
   
}


 
 
 
  
 

 