//13. Hierarchical inheritance
#include<iostream>
#include<conio.h>
using namespace std;
class human
{
    string name;
    int age;
    public:
    human()
    {
        cout<<"In constructor of human\n";
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age:";
        cin>> age;
    }

};
class school:private human
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
class college: human
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
        cout<<"Enter semester :";
        cin>>collegesemester;
        cout<<"Enter marks:";
        cin>>collegemarks;
    }
};
int main()
{
    school ravi;
    college ravina;
    getch();
    return 0;
}