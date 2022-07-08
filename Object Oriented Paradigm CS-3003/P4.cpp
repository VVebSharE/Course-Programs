/*4. A phone no. such as (212)767-8900 , can be thought of as having three parts area code(212), the
exchange (767) and the number (8900). Write a program that uses a structure to store these
three parts of phone both no. separately . Call the structure phone . create two structure Enter
your area code Exchange and number : 415 555 1212
My number is (415)555-1212*/
#include<iostream>
using namespace std;
struct phone
{
    int ac,e,n;
    void printn()
    {
        cout<<"My number is ("<<ac<<")"<<e<<"-"<<n;
    }
    void call() 
    {
        cout<<"Enter your area code Exchange and number :";
        cin>>ac>>e>>n;
    }
};
int main()
{
    phone p1;
    p1.call();
    p1.printn();
    return 0;
}