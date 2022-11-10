#include<iostream>
#include<cstring>
using namespace std;
class Book
{
    int Bookno;
    string booktitle;
    float price,total_cost;
    public:
    void Input();
    void Total_cost(int);
    void Purchase();
};
     void Book::Input(){
        cout<<"\n book No :";
        cin>>Bookno;
        cout<<"\n book per copy price :";
        cin>>price;
        cout<<"\n book Title :";
        cin>>booktitle;
    }
    void Book::Total_cost(int N){
        total_cost=N*price;
        cout<<"\n book purchase by user :"<<N;
    }
     void Book::Purchase(){
       
        cout<<"\n total books purchase price:"<<total_cost;
    }
int main()
{
    Book b[5];
    int i;
    for(i=1;i<=2;i++)
    {
        cout<<"\n book information---------------------------------";
        b[i].Input();
        b[i].Total_cost(20);
        b[i].Purchase();
    }
    return 0;
}