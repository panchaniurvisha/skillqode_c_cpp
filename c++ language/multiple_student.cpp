//Multiple_student..
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    int rl;
    char nm[20];
    public:
        void Read();
        void Display();
};
class Marks 
{
    protected:
        int s1;
        int s2;
        int s3;
    public:
        void GetMarks();
        void PutMarks();
};
class Result : public Student,public Marks
{
        int t;
        float p;
        char div[10];
    public:
        void Process();
        void PrintResult();
};
void Student::Read()
{
    cout<<"Roll No:";
    cin>>rl;
    cout<<"Enter name:";
    cin>>nm;
}
void Student::Display()
{
    cout<<"\n Roll No:"<<rl<<endl;
    cout<<"Nmae :"<<nm<<endl;
    cout<<"\n";
}
void Marks::GetMarks()
{
    cout<<"enter marks for 3 subjects:"<<endl;
    cin>>s1>>s2>>s3;
}
void Marks::PutMarks()
{
    cout<<"Subject 1 :"<<s1<<endl;
    cout<<"Subject 2 :"<<s2<<endl;
    cout<<"Subject 3 :"<<s3<<endl;
}
void Result::Process()
{
    t=s1+s2+s3;
    p=t/3.0;
    p>=60?strcpy(div,"first"):p>=50?strcpy(div,"second"):strcpy(div,"third");
}
void Result::PrintResult()
{
    cout<<"Total="<<t<<endl;
    cout<<"\n";
    cout<<"Percentage="<<p<<endl;
    cout<<"Division="<<div<<endl;
}
int main()
{
    Result X;
    X.Read();
    X.GetMarks();
    X.Process();
    X.Display();
    X.PutMarks();
    X.PrintResult();
}
/*#include<iostream.h>
#include<conio.h>

class student {
protected:
    int rno, m1, m2;
public:

    void get() {
        cout << "Enter the Roll no :";
        cin>>rno;
        cout << "Enter the two marks   :";
        cin >> m1>>m2;
    }
};

class sports {
protected:
    int sm; // sm = Sports mark
public:

    void getsm() {
        cout << "\nEnter the sports mark :";
        cin>>sm;

    }
};

class statement : public student, public sports {
    int tot, avg;
public:

    void display() {
        tot = (m1 + m2 + sm);
        avg = tot / 3;
        cout << "\n\n\tRoll No    : " << rno << "\n\tTotal      : " << tot;
        cout << "\n\tAverage    : " << avg;
    }
};

void main() {
    clrscr();
    statement obj;
    obj.get();
    obj.getsm();
    obj.display();
    getch();
}*/