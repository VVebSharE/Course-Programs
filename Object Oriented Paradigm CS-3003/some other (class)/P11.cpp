//11.Multiple inheritance
#include<iostream>
#include<conio.h>
using namespace std;
class school
{
    int schoolrollno;
    int schoolclass;
    int schoolmarks;
    public:
    school()
    {
        cout<<"In constructor of school\n";
        cout<<"Enter roll no.:";
        cin>>schoolrollno;
        cout<<"Enter class :";
        cin>>schoolclass;
        cout<<"Enter marks:";
        cin>>schoolmarks;
    }

};
class college
{
    int collegerollno;
    int collegesemester;
    int collegemarks;
    public:
    college()
    {
        cout<<"In constructor of college\n";
        cout<<"Enter roll no.:";
        cin>>collegerollno;
        cout<<"Enter class :";
        cin>>collegesemester;
        cout<<"Enter marks:";
        cin>>collegemarks;
    }
};
class human: private college, private school
{
    string name;
    int age;
    public:
    human()
    {
        cout<<"In constructor of college";
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age";
        cin>> age;
    }

};
int main()
{
    human ravi;
    getch();
    return 0;
}