//4.function overloading
#include<iostream>
#include<conio.h>
using namespace std;
int add(int a , int b )
{
    cout<<"integer additon :";
    return a+b;
}
float add(float a, float b)
{
    cout<<"\nfloat addition:";
    return a+b;
}
int main()
{
    cout<<add(1,2);
    cout<<add((float)1,(float)2);
    getch();
    return 0;
}