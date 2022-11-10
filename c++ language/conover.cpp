#include <iostream>//constructer overload
using namespace std;
class Bank{
    string name;
    int accbalance,wdbalance,dpbalance;
    public:
    Bank();
    Bank(int);
    void getAccInfo();
    void showAccBalance();
    void showBankDetails();
};
    void Bank::getAccInfo()
    {
        cout<<"\n Name :";
        cin>>name;
    }
    Bank::Bank()
    {
       accbalance=1000;
    }
    Bank::Bank(int initbal)
    {
       accbalance=initbal;
    }
    void  Bank::showAccBalance(){
      cout<<"\n account balance :";
      cin>>accbalance;
      cout<<"\n withdraw balance :";
      cin>>wdbalance;
      //cin>>wdbalance;
      cout<<"\n reminder balance :"<<accbalance-wdbalance;
      cout<<"\n deposite balance :";
      cin>>dpbalance;
      //cin>>dpbalance;
      cout<<"\n total balance :"<<(accbalance-wdbalance)+dpbalance;
    }
    void Bank::showBankDetails(){
      cout<<"\n Name :";
      cout<<"\n account balance :"<<accbalance;
      cout<<"\n withdraw balance :"<<wdbalance;
      cout<<"\n reminder balance :"<<accbalance-wdbalance;
      cout<<"\n deposite balance :"<<dpbalance;
      cout<<"\n total balance :"<<(accbalance-wdbalance)+dpbalance;
    }

int main()
{
    Bank person[5];
    int i;
    for(i=1;i<3;i++)
    { 
        cout<<"\n enter person["<<i<<"]bank statement :";
        person[i].getAccInfo();
        person[i].showAccBalance();
        person[i].showBankDetails();
    }
}