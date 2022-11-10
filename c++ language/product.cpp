#include<iostream>
#include<cstring>
using namespace std;
class Product
{
    string name;
    int quantity,rate,bill,discount,discount_amount,amount,gst,gst_amount,net_amount;
    public:
    void getval()
    {
        cout<<"\n enter product name :";
        cin>>name;
        cout<<"\n quantity :";
        cin>>quantity;
        cout<<"\n rate :";
        cin>>rate;
        cout<<"\n discount :";
        cin>>discount;
        cout<<"\n gst :";
        cin>>gst;
    }
    void docal()
    {
        bill=quantity*rate;
        cout<<"\n bill :"<<bill;
        discount_amount=bill*discount/100;
        cout<<"\n  discount_amount : "<<discount_amount;
        amount=bill-discount_amount;
        cout<<"\n amount :"<<amount;
        gst_amount=amount*gst/100;
        cout<<"\n gst_amount:"<<gst_amount;
        net_amount=amount+gst_amount;
        cout<<"\n net_bill :"<<net_amount;
     }
};
    int main()
    {
        Product obj1;
        obj1.getval();
        obj1.docal();
    }
        


        
       

    


