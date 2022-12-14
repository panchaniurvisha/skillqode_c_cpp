#include<iostream>
using namespace std;
int main()
{
    int ch;
    cout<<"\n Enter your day...:";
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"\n Monday ";
        break;
        case 2:
        cout<<"\n Tuesday ";
        break;
        case 3:
        cout<<"\n wednesday ";
        break;
        case 4:
        cout<<"\n thursday ";
        break;
        case 5:
        cout<<"\n friday ";
        break;
        default:
        cout<<"\n wrong choice...";
        break;
    }
}


