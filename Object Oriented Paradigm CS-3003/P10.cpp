/*10. Makes a class Employee with the name and salary . Makes a class manager inherit from the
Employee Add an instance variable named :department, type : string. Supply a method to String
that print the manager’s name, department and salary. Make a class Executive inherit from
information store in the manager super class object . Supply a test program that test these classes
and methods.*/
#include<iostream>
using namespace std;
class Employee 
{
    protected :
    string name;
    int salary;
};
class Manager : public Employee
{
    protected:
    string department;
    public:
    void print()
    {
        cout<<"Manager's name :"<<name;
        cout<<endl<<"Department :"<<department;
        cout<<endl<<"Salary :"<<salary;
    }
};
class Executive : public Manager
{
    public:
    void enter()
    {
        cout<<"Enter name :";
        cin>>name;
        cout<<"Enter salary :";
        cin>>salary;
        cout<<"Enter department :";
        cin>>department;
    }
};
int main()
{
    Executive e1;
    e1.enter();
    e1.print();
    return 0;
}