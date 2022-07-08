//9.type conversion
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a;
    float A=10.10;
    //implicit
    a=A;
    cout<<a;
    //explicit
    cout<<endl<<(int)A;
    getch();
    return 0;
}