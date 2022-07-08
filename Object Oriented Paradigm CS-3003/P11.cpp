/*11. Imagine a tollbooth with a class called Toll booth . The two data item are a type unsigned into to
hold the total number of cars and type double to hold the total amount of money collected . A
constructor initializes both these to 0. A member function called nopaycar( ). Increments the car
total and adds 0.50 to the cash total. Another function, called nopaycar( ), increment the car total
but adds nothing to the cash total. Finally , a member function called display the two totals .
Include a program to test this class . This program should allow the user to push one key to count
paying a car and another to count a non paying car . Pushing the ESC key should cause the
program to print out the total cars and total cash and then exit.*/
#include<iostream>
#include<conio.h>
using namespace std;
class Tollbooth
{
    unsigned cars;
    double money;
    public:
    Tollbooth()
    {
        cars=0;
        money=0;
    }
    void paycar()
    {
        cars++;
        money+=0.50;
    }
    void nopaycar()
    {
        cars++;
    }
    void display()
    {
        cout<<"\nTotal cars :"<<cars;
        cout<<endl;
        cout<<"Total cash :"<<money;
    }
};
int main()
{
    char a;
    Tollbooth t;
    cout<<"Enter a to count paying a car, b to count non paying car and ESC to print totals and exit :";
    while(1){
    a=_getch();
    if(a=='a')
    t.paycar();
    else if(a=='b')
    t.nopaycar();
    else
    {
        t.display();
        break;
    }
    }
    return 0;
}