//10.Single inheritance
#include<iostream>
#include<conio.h>
using namespace std;
class human
{
    int age;
    string gender;
    public:
    void printhuman()
    {
        cout<<"Age :"<<age<<endl;
        cout<<"Gender :"<<gender<<endl;
    }
    human()
    {
        cout<<"Constructor of human\n";
        cout<<"Enter age:";
        cin>>age;
        cout<<"Enter gender:";
        cin>>gender;

    }    

};
class stclass :private human
{
int rollno;
string name;
int marks;
public:
void printst()
{
    printhuman();
    cout<<"rollno :"<<rollno<<endl;
    cout<<"name   :"<<name<<endl;
    cout<<"marks  :"<<marks<<endl;
}
stclass()
{   
    cout<<"Constructor of stclass\n";
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
    stclass amit;
    amit.printst();
    getch();
    return 0;
}