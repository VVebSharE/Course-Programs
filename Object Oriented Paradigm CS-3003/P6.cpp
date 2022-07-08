/*6. Create a class rational which represents numerical value by two double value
NUMERATOR & DENOMENATOR . Include the following public member
functions:
· Constructor with no arguments.(defaults)
· Constructor with two arguments.
· Void reduce() that reduce the rational number by eliminating the highest common factor
between the numerator and denominator .
· Overload +operator to add two rational number
· Overload operator >> operator to be enabled input through cin
· Overload <<operator to be enabled input through count.
Write a main ( ) to test all the functions in the class*/
#include<iostream>
using namespace std;
class rational 
{
    double NUMERATOR , DENOMENATOR;
 public:
    rational() 
    {
        NUMERATOR=0;
        DENOMENATOR=0;
    }
    rational(double a, double b)
    {
        NUMERATOR=a;
        DENOMENATOR=b;
    }
    void reduce()
    {
        double hcf=1;
        for(long q=NUMERATOR,r=DENOMENATOR;r>0;)
        {
            long t=q;
            q=r;
            r=t%r;
            if(r==0)
            hcf=q;
        }
        NUMERATOR/=hcf;
        DENOMENATOR/=hcf;
       
    }
    rational operator +(rational r)
    {
        rational r12;
        r12.DENOMENATOR=r.DENOMENATOR*DENOMENATOR;
        r12.NUMERATOR=r.NUMERATOR*DENOMENATOR+NUMERATOR*r.DENOMENATOR;
        r12.reduce();
        return r12;

    }
    friend istream & operator >>(istream &i,rational &r)
    {
        i>>r.NUMERATOR;
        i>>r.DENOMENATOR;
        return i;
    }
    friend ostream & operator <<(ostream &o,rational r)
    {
        o<<r.NUMERATOR<<"/"<<r.DENOMENATOR;
        return o;
    }

};
int main()
{
    rational r1,r2(4,5);
    cout<<"Enter NUMERATOR & DENOMENATOR of first rational no.";
    cin>>r1;
    r1.reduce();
    r2.reduce();
    cout<<"First no. :"<<r1<<"\nSecond no. :"<<r2;
    rational r3=r1+r2;
    cout<<"\nAfter adding two no.s and storing result in third :\n";
    cout<<"Third no. :"<<r3;
    return 0;
}