//2.inline function
#include<iostream>
#include<conio.h>
using namespace std;
inline void fun()
{
    cout<<"in inline function";
}
int main()
{
cout<<"In main"<<endl;
fun();
getch();
return 0;
}