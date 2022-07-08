/*7. Consider the following class definition class father {
Protected : int age;
Public:
Father (int x) {age = x;} Virtual void iam ()
{
{cout <<”I AM THE FATHER , my age is “,<<age<<endl;}
};
Derive the two classes son and daughter from the above classes and for each define iam() to write our
similar but appropriate message .You should also define suitable constructors for these classes Now
write a main ( ) that creates objects of three classes and then call iam( ) them .Declare pointer to
father , successively assign addresses of object of the two derived classes to this pointer and in each
case , call iam( ) through the pointer to demonstrate polymorphism in action.*/
#include<iostream>
using namespace std;
class father 
{
    protected : 
    int age;
    public:
    father(int x) 
    {
        age = x+10;
    } 
    virtual void iam()
    {
        cout <<"I AM THE FATHER , my age is "<<age<<endl;
    }
    
};
class son : public father
{
    
    public:
    son(int x): father(x)
    {
        age=x;
    }
    void iam()
    {
        cout<<"I AM THE SON , my age is "<<age<<endl;
    }
};
class daughter : public father
{
    
    public:
    daughter(int x):father(x)
    {
        age=x;
    }
    void iam()
    {
        cout<<"I AM THE DAUGHTER , my age is "<<age<<endl;
    }
};
int main()
{
    int f,s,d;
    cout<<"Enter ages of father, son and daughter :";
    cin>>f>>s>>d;
    father f1(f);
    daughter d1(d);
    son s1(s);
    f1.iam();
    d1.iam();
    s1.iam();
    father *f2;
    f2=&d1;
    f2->iam();
    f2=&s1;
    f2->iam();
    father f3=*f2;
    f3.iam();
    return 0;
}