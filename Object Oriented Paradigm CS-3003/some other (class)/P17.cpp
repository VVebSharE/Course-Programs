//17. Exception Handling
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b;
    try
    {

        if(b==0)
        throw 1;
        c=a/b;
        cout<<a<<"/"<<b<<"="<<c;

    }
    catch(int x)
    {
        cout<<"Devision by 0";
    }
    
    getch();
    return 0;
}