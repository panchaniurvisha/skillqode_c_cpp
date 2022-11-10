//Operator overloding
#include<iostream>
using namespace std;
class loc
{
    int longitude,latitude;
    public:
    loc();
    loc(int,int);
    void show();
    loc operator+(loc);
};
  loc::loc(){
    longitude=0;
    latitude=0;
  }
   loc::loc(int lg,int lt){
    longitude=lg;
    latitude=lt;
   }
   void loc::show(){
    cout<<"\n logitude :"<<longitude;
    cout<<"\n latitude :"<<latitude<<"\n";
   }
   loc loc::operator +(loc ob2){
        loc temp;
        temp.longitude=longitude+ob2.longitude;
        temp.latitude=latitude+ob2.latitude;
        return temp;
   }
   int main()
   {
    loc ob1(10,20),ob2(25,30),ob3;
    ob1.show();
    ob2.show();
    ob3=ob1+ob2;
    ob3.show();
   }