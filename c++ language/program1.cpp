#include<iostream>
using namespace std;
class Student
{
    int admno;
    char name[20];
    float eng,maths,science,total;
    public:
    void Takedata();
    float ctotal();
    void showdata();
};
    void Student::Takedata(){
        cout<<"\n admission no :";
        cin>>admno;
        cout<<"\n name :";
        cin>>name;
        cout<<"\n english :";
        cin>>eng;
        cout<<"\n maths :";
        cin>>maths;
        cout<<"\n science :";
        cin>>science;
    }
    float Student::ctotal(){
        return eng+maths+science;
    }
    void Student::showdata(){
        cout<<"\n admission no :"<<admno<<"\n name :"<<name<<"\n eng :"<<eng<<"\n maths :"<<maths<<"\n science :"<<science;
        cout<<"\n total :"<<eng+maths+science;
    }
    int main()
    {
        Student s[3];
        int i;
        for(i=1;i<=3;i++)
        {
            cout<<"\n enter student information :";
            s[i].Takedata();
            cout<<"\n total in float :"<<s[i].ctotal();
            s[i].showdata();
        }
        return 0;
    }
    






