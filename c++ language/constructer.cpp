#include <iostream>//constructer overload
using namespace std;
class Bank{
    public:
    Bank(int,int,int);
};
    Bank::Bank(int accbalance,int wdbalance,int dpbalance){
    {
      cout<<"\n account balance :"<<accbalance<<"\n withdraw_balance :"<<wdbalance;
      cout<<"\n reminder balance :"<<accbalance-wdbalance;
      cout<<"\n deposite balance :"<<dpbalance;
      cout<<"\n total balance :"<<(accbalance-wdbalance)+dpbalance;
    }
}
int main()
{
    cout<<"\n enter person 1 bank statement :";
    Bank obj1(1500,500,7000);
}