#include<iostream>
using namespace std;
class in
{
    public:
    void print()
    {
        cout<<a<<" "<<b;
    }
    int a;
    int b;
    in(){}
    int operator =(int in)
    {
        a=in;
        b=in+1;
        return in;
    }
    
};
void fun(in x)
{
    x.print();
}
int main()
{
    in x=0;
    fun(1);
    x.print();
    return 0;
}