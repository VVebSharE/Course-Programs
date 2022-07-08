/*15. Create a base class called shape .Use this class to store two double type values that could be used to
compute the area of figure, Derive to specific classes called triangle and rectangle from the base
shape . Add to the base class, a member function get data ( ) to initialize base class data member
and another member function display area ( ), To compute and display the area of figures make
display area ( ) as virtual function and redefine this function in the derived classes to suit the
requirements.
60
Using this three classes design a program that will accept dimension of triangle or rectangle
interactively and display the area
Remember the two value given as input will be treated as length of two sides in the case of
rectangle and as base and height in the case of triangle and used as follows
Area of rectangle= x * y
Area of triangle =1/2 * x * y*/
#include<iostream>
using namespace std;
class shape_
{
    protected:
    double a,b;
    public:
    void getdata()
    {
        cout<<"Enter two lengths :";
        cin>>a>>b;
    }
    virtual void displayarea() {}
};  
class triangle: public shape_
{
    public :
    void displayarea()
    {
        cout<<"Area :"<<1/2.0*a*b;

    }

};
class rectangle: public shape_
{
    public:
    void displayarea()
    {
        cout<<"Area :"<<a*b;
        
    }
};
int main()
{
    triangle t;
    t.getdata();
    t.displayarea();
    return 0;
}