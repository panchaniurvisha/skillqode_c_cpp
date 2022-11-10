#include<iostream>
#include<cstring>
using namespace std;
class Flight
{
    int flightnum;
    string destination;
    float distance,fuel;
    void CalFuel()
    {
        if(distance<=1000)
        {
            fuel=500;
        }
        else if(distance>=1000 && distance<=2000)
        {
            fuel=1100;
        }
        else 
        {
            fuel=2200;
        } 
    }
    public:
    void FeedInfo();
    void ShowInfo();
};
    void Flight::FeedInfo()
    {
        cout<<"\n enter flight number of pessanger :- ";
        cin>>flightnum;
        cout<<"\n destination:- ";
        cin>>destination;
        cout<<"\n distance :- ";
        cin>>distance;
        CalFuel();
    }
    /*void Flight::CalFuel()
    {
        if(distance<=1000)
        {
            fuel=500;
        }
        else if(distance>=1000 && distance<=2000)
        {
            fuel=1100;
        }
        else 
        {
            fuel=2200;
        } 
    }*/
    void Flight::ShowInfo()
    {
        cout<<"\n flight number of pessanger :- "<<flightnum;
        cout<<"\n destination :- "<<destination;
        cout<<"\n distance :- "<<distance;
        cout<<"\n fuel :- "<<fuel;
    }
int main()
{
    Flight pessanger;
    pessanger.FeedInfo();
    pessanger.ShowInfo();
}
