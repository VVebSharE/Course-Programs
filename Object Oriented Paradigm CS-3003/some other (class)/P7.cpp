//7.refrence as function parameters
#include<iostream>
#include<conio.h>
using namespace std;
void funwithrefpar(int &a)
{a++;}
int main()
{
    int a=10;
    cout<<"a:"<<a;
    funwithrefpar(a);
    cout<<endl<<"a:"<<a;
    getch();
    return 0;
}