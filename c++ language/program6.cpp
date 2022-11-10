#include<iostream>
#include<cstring>
using namespace std;
class Report
{
    int i,adno;
    string name;
    float marks[10],average,total=0.00;
    public:
    void ReadInfo();
    void GetAvg();
    void displayInfo();
};
    void Report::ReadInfo(){
        cout<<"\n Admission number:";
        cin>>adno;
        cout<<"\n name :";
        cin>>name;
        for(i=1;i<=5;i++)
        {
              cout<<"\n Marks subject["<<i<<"] :";
              cin>>marks[i];
        }
    }
    void Report::GetAvg(){
        for(i=1;i<=5;i++){
        total+=marks[i];
        average=total/5;
        }
    }
     void Report::displayInfo(){
        cout<<"\n Admission number:"<<adno;
        cout<<"\n name :"<<name;
        for(i=1;i<=5;i++)
        {
              cout<<"\n Marks subject["<<i<<"] :"<<marks[i];
        }
        cout<<"\n average student marks :"<<average;
     }
     int main()
     {
        Report r1;
        r1.ReadInfo();
        r1.GetAvg();
        r1.displayInfo();
        return 0;
     }