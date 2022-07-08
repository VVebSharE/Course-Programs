//3.scope resolution Operator
#include<iostream>
#include<conio.h>
using namespace std;
int a=12;
int main()
{
    int a=10;
    cout<<"local  a:"<<a<<endl;
    cout<<"global a:"<<::a;
    getch();
    return 0;
}