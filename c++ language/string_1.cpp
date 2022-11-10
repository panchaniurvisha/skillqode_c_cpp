#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string str;
    cout<<"\n enter string :";
    
    getline(cin,str);
    
    // int len=strlen(str);
    int len=str.length();
    cout<<"\n enter string length :"<<len;

}