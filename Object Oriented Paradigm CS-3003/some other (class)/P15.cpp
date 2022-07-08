//15. Operator overloading
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
    void printh()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Age  :"<<age<<endl;
    }
    void operator ++(int a)
    {
        age++;
    }


};
int main()
{
    
    
    human ravi;
    ravi++;
    ravi.printh();
    getch();
    return 0;
}