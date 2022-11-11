
#include<iostream>
using namespace std;
template <class T1,class T2>
class A
{
    T1 t1;
    T2 t2;
    public:
     A(T1 x,T2 y)
       {
           t1=x;
           t2=y;
       }
     void display( )
        {
          cout<<"\n displaying template :"<<t1<<"\t"<<t2;
        }
    
};
int main()
{
   A <int,float >a(20,20.50);
   a.display();
   A <int,int >b(200,200);
   b.display();
   A <string,char>c("urvisha",'u');
   c.display();
   return 0;
}
