#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

/*{
    int a[5][5];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\n a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    }
    cout<<"\n your matrix is \n\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\t"<<a[i][j];
        }
            cout<<"\n";
    }
    return 0;
}*/
/*{
    int a[5][5],b[5][5],total;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\n a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    }
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
            cout<<"\n b["<<i<<"]["<<j<<"]=";
            cin>>b[i][j];
        }
    }
    cout<<"a\tb\ttotal----------------------------\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\t"<<a[i][j];
        }
        for(j=0;j<3;j++)
        {
            cout<<"\t"<<b[i][j];
        }
        for(j=0;j<3;j++)
        {
            total=a[i][j]+b[i][j];
            cout<<"\t"<<total;
        }
        cout<<"\n";
    }
    return 0;
}*/
/*{
    int i,j,a[5][5],diagonal_total=0,upper_total=0,lower_total=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\n a["<<i<<"]["<<j<<"] =";
            cin>>a[i][j];
        }
    }
    cout<<"\n\n your matrix is-------------\n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<"\n";
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                diagonal_total=diagonal_total+a[i][j];
            }
            else if(i<=j)
            {
                upper_total=upper_total+a[i][j];
            }
            else if(j<=i)
            {
                lower_total=lower_total+a[i][j];
            }
        }
    }
    cout<<"\n diagonal_total ="<<diagonal_total;
    cout<<"\n upper_total ="<<upper_total;
    cout<<"\n lower_total ="<<lower_total;
    return 0;
}*/
/*#include <iostream>
#include <math.h>
using namespace std;
float CmInt()
{
    float principle, rate, time, CI;
    cout << "\n enter principle (amount) :";
    cin >> principle;
    cout << "\n enter rate  :";
    cin >> rate;
    cout << "\n enter time :";
    cin >> time;

    CI = principle * (pow((1 + rate / 100), time));
    return (CI);
}
int main()
{
    float CI;
    CI = CmInt();
    cout << "\n CI :" << CI;
}*/

//string................
/*{
    char str[10];
    cout<<"\n enter string :";
    cin>>str;
    int len=strlen(str);
    cout<<"\n string length :"<<len;
    return 0;

}*/

/*void reversestr(string& str)
    {
        int n=str.length();
        int i;
        for(i=0;i<n/2;i++)
        swap(str[i],str[n-i-1]);
    }
int main()
    {
        string str;
        cout<<"\n enter string :";
        getline(cin,str);
        reversestr(str);
        cout<<str;
        return 0;
    }*/
    //~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    /*int main()
    {
        string str;
        cout<<"\n enter string :";
        getline(cin,str);
        int len=strlen(str);
        cout<<"\n"<<strlen(str);
        cout<<"\n"<<str;
        return 0;
    }*/

    /*int main()
    {
        int i,j,len;
        char str1[100],str2[100];
        cout<<"\n enter string :";
        cin>>str1;
        for(i=0;str1[i]!='\0';i++);
        {
            cout<<"\n length :"<<i;
        }
        int k=i;
        for(j=0;j<i;j++)
        {
            str2[j]=str1[--k];
        }
        str2[j]!='\0';
        cout<<"\n reverse string :"<<str2;
    }*/

 