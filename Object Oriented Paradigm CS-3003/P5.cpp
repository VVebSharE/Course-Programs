/*5. Create two classes DM and DB which stores the value of distances DM stores distance in meters and
centimeters and DB in feet and inches . Write a program that can read value for the classes objects
and add one object of DM with another object DB.
Use a friend function to carry out the addition operation .The object that stores the result may be a Dm object
or DB object depending on the units in which result are required .
The display should be in the format of feet and inches or meters and centimeters depending on the object on
display.*/
#include<iostream>
using namespace std;
class DB;
class DM;
class DM
{
    int meters,centimeters;
    public:
    void corr()
    {
        meters+=centimeters/100;
        centimeters=centimeters%100;
    }
    void print()
    {
        corr();
        cout<<meters<<" meters"<<" and "<<centimeters<<" centimeters";
    }
    void input()
    {
        cout<<"Enter meters :";
        cin>>meters;
        cout<<"Enter centimeters :";
        cin>>centimeters;
    }
    friend DB funadd(DM,DB);
    //DB is not defined till here
};
class DB
{
    int feet,inches;
    public:
    void corr()
    {
        feet+=inches/12;
        inches=inches%12;
    }
    void print()
    {
        //corr();
        cout<<feet<<" feet"<<" and "<<inches<<" inches";
    }
    void input()
    {
        cout<<"Enter feet :";
        cin>>feet;
        cout<<"Enter inches :";
        cin>>inches;
    }
    friend DB funadd(DM,DB);
};
DB funadd(DM d1, DB d2)
{
    float disinmeter=d1.meters+d1.centimeters/100.0;
    float disinfeet=disinmeter*3.28084;
    d2.feet+=disinfeet;
    d2.inches+=int(disinfeet*12)%12;
    return d2;
}


int main()
{
    DM tree1;
    DB tree2;
    tree1.input();
    tree2.input();
    tree2=funadd(tree1,tree2);
    cout<<"Sum of two distances :";
    tree2.print();
    return 0;
}

//cannot overload functions distinguished by return type alone
//i think a function can only be friend of only one class
//= operator can't be friend 