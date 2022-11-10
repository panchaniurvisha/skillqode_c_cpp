#include<iostream>
using namespace std;
class Batsman
{
    int bcode,innings,notout,runs;
    char bname[20];
    float batavg;
    public:
    void Readdata();
    void Calcavg();
    void Displaydata();
};
     void Batsman::Readdata(){
        cout<<"\n batsman code :";
        cin>>bcode;
        cout<<"\n batsman Name :";
        cin>>bname;
        cout<<"\n batsman innings :";
        cin>>innings;
        cout<<"\n Notout :";
        cin>>notout;
        cout<<"\n Runs :";
        cin>>runs;
     }
     void Batsman::Calcavg(){
        batavg=(float)runs/(innings-notout);
        cout<<"\n Batsman average :"<<batavg;
     }
     void Batsman::Displaydata(){
        cout<<"\n batsman code :"<<bcode;
        cout<<"\n batsman Name :"<<bname;
        cout<<"\n batsman innings :"<<innings;
        cout<<"\n Notout :"<<notout;
        cout<<"\n Runs :"<<runs;
        cout<<"\n Batsman average :"<<batavg;
     }
     int main()
     {
        Batsman b[5];
        int i;
        for(i=1;i<=2;i++)
        {
            cout<<"\n enter batsman information------------------------------";
            b[i].Readdata();
            b[i].Calcavg();
            b[i].Displaydata();
        }
        return 0;
     }
