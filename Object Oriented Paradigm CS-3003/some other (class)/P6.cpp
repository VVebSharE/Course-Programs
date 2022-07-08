//6.parameterized & copy constructor
#include<iostream>
#include<conio.h>
//#include<string>
using namespace std;
class stclass
{
int rollno;
string name;
int marks;
public:
void printst()
{
    cout<<"rollno :"<<rollno<<endl;
    cout<<"name   :"<<name<<endl;
    cout<<"marks  :"<<marks<<endl;
}
stclass()
{
    cout<<"In default constructor\n";
    cout<<"Enter rollno:";
    cin>>rollno;
    cout<<"Enter name:";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter marks:";
    cin>>marks;
}
stclass(int r,string n,int m)
{
    cout<<"In parametrized constructor\n";
    rollno=r;
    name=n;
    marks=m;
}
stclass(const class stclass &obj)
{
    cout<<"In copy constructor \n";
    *this=obj;
}
~stclass()
{
    cout<<"In distructor"<<" of object of name: "<<name<<endl;
}

};
int main()
{
    stclass stobject,stobject1(1,"abc",200),stobject2(stobject1);
    stobject.printst();
    stobject1.printst();
    stobject2.printst();
    getch();
    return 0;
}