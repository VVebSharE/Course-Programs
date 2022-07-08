/*1. Raising a number n to a power of p is the same as multiplying n by itself p times. Write a
function called power( ) that takes a double value for n, int value for p and returns the result as
double value . Use a default argument of 2 of p, so that if this argument is omitted, the number
will be squared. Write a main ( ) function that gets values from the user to test this function .*/

#include<iostream>
using namespace std;
double power(double n, int p=2)
{
    double npowerp=1;
    if(p>=1)
    while(p!=0)
    {
        npowerp*=n;
        p--;
    }
    else
    while(p!=0)
    {
        npowerp/=n;
        p++;
    }
    return npowerp;
}
int main()
{
    double n;
    int p;
    cin>>n>>p;
    cout<<power(n,p);
    return 0;
}