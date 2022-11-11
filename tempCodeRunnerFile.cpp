/*#include<iostream>
using namespace std;
template <class T1,class T2>
class A
{
    public:
     void display(T1 t1,T2 t2)
        {
            cout<<"Displaying Template :"<<t1<<"\t"<<t2<<"\n";
        }
};
int main()
{
    A <int,float>a;
    a.display(200,12.5);
    A <string,char>b;
    b.display("urvi",'u');
    return 0;
}*/
#include<iostream>
using namespace std;
template <class T>
class A
{
    public:
     virtual void display(T t)
        {
            cout<<"Displaying Template :"<<t;
        }
};
template <class T1,class T2>
class B :public A
{
    public:
      void display(T1 t1,T2 t2)
      {
             cout<<"Displaying Template 1 :"<<t1<<"\t"<<t2;
      }

};
int main()
{
   A <int> a,*p;
   B <int,float> b;
   p=&a;
   p->display(12);
   p=&b;
   p->display(120,60.5);
   return 0;
}