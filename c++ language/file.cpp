//ofstream:stream class to write on files;
//ifstream:stream class to read from file;
//fstream: stream class to both read and write from/to files;
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream filestream("file.txt");
    if(filestream.is_open())
    {
        filestream<<"Wellcome to skillqode";
        filestream<<"\n after exam";
        filestream.close();
    }
    else
    {
        cout<<"file opening is fail.";
    }
    return 0;
}