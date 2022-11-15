//ofstream:stream class to write on files;
//ifstream:stream class to read from file;
//fstream: stream class to both read and write from/to files;
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string srg;
    ifstream filestream("file1.txt");
    if(filestream.is_open())
    {
        while(getline(filestream,srg))
        {
            cout<<srg<<endl;
        }
        filestream.close();
    }
    else
    {
        cout<<"file is fail."<<endl;
    }
    return 0;
    
}
    