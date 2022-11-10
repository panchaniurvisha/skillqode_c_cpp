#include<iostream>
using namespace std;
class Microsol
{
    int year;
    float salary,bonus;
    public:
    Microsol();
    Microsol(float);
    void docal();
};
Microsol::Microsol()
{
    salary=200000;
}
Microsol::Microsol(float initsalary)
{
    salary=initsalary;
}
void Microsol::docal()
{
    cout<<"Enter salary of Employee=";
    cin>>salary;
    cout<<"Enter year=";
    cin>>year;
  {
   if(year<=5)
   bonus = salary;
   else if(year>5 && year <=10)
   bonus=salary*5/100;
   else if(year>10 && year <=15)
   bonus=salary*10/100;
   else if(year>15 && year <=20)
   bonus=salary*15/100;
   else if(year>20 && year <=25)
   bonus=salary*20/100;
   else
   bonus=salary*25/100;
  }
   salary = salary + bonus;
   cout<<"The Total salary of Employee = "<<salary; 
}
int main()
{
    Microsol person1(400000),person2(700000),person3;
    person1.docal();
    person2.docal();
    person3.docal();
}


 
 
 
  
 

 