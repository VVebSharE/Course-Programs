//8.refrence as return value
#include<iostream>
#include<conio.h>
using namespace std;
int a=0;
int &funwhichreturnref()
{
    return a;

}
int main()
{
    funwhichreturnref()++;
    cout<<a;
    getch();
    return 0;
}