#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    int rollno;
    char name[20];
public:
    void read();
    void display();
};
class Marks : public Student
{
protected :
    int s1;
    int s2;
    int s3; 
public : 
    void getMarks();
    void putMarks();
};
class  Sports : public Student
{
public:
    int Sportsmarks;
    void getsports();
};
class Result : public Marks, public Sports
{
int t;
    float p;
    char div[10];
public :
    void process();
    void printResult();
    
};
void Student ::read()
{
    cout<<"\n Enter Roll No.. ";
    cin>>rollno;
    cout<<"\n Enter Student Name.. ";
    cin>>name;
   
}
void Student::display()
{
    cout<<"\n Roll No.. "<<rollno<<endl;
    cout<<"\n Name.. "<<name<<endl;
    cout<<"\n";
}
void Marks::getMarks()
{
    cout<<"\n Enter Marks For 3 Subjects.."<<endl;
    cin>>s1>>s2>>s3;
}
void Marks::putMarks()
{
    cout<<"Subject 1 : "<<s1<<endl;
    cout<<"Subject 2 : "<<s2<<endl;
    cout<<"Subject 3 : "<<s3<<endl;
}
void Sports::getsports()
{
    cout << "Enter sports marks.. " ;
	cin >>Sportsmarks;
}
void Result::process()
{
    t = s1+s2+s3;
    p = t/3.0;
    p>=68?strcpy(div,"First") : p>=50?strcpy(div,"Second") : strcpy(div,"Third");
}
void Result::printResult()
{
    cout<<"Total = " <<t<<endl;
    cout<<"\n";
    cout<<"\n Percentage = " <<p<<endl;
    cout<<"\n Division = " <<div<<endl;
    cout << "\n Percentage + Sports marks =" << p + Sportsmarks;
}
int main()
{
    Result x;
    Marks M;
    M.read();
    x.getMarks();
    x.getsports();
    x.process();
    M.display();
    x.putMarks();
    x.printResult();
    return 0;
}
