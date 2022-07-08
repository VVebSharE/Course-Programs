//1.program with classes
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
    cout<<"Enter rollno:";
    cin>>rollno;
    cout<<"Enter name:";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter marks:";
    cin>>marks;
}

};
int main()
{
    stclass stobject;
    stobject.printst();
    getch();
    return 0;
}