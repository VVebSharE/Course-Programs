//16. Opening and closing of file
//why not getting next line
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    fstream file;
    string b="\n";
    cout<<b;
    file.open("Practicals.txt");
    file.seekg(0);
    file.seekp(0);
    while(!file.eof())
    {
        char a;
        file>>a;
        cout<<a;
    }
    file.close();
    getch();
    return 0;
}