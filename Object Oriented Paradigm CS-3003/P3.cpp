/*3. Create the equivalent of four function calculator . The program should request
the to user to enter a number , an operator and another number . It should carry
out the specified arithmetical
operation: adding, subtracting, multiplying ,or dividing the two numbers. (it should use a switch
statement to select the operation ) finally it should be display the result. When it finishes the
calculation, the program should ask if the user want to do another calculation. The response
can be ‘Y’ or ‘N’, Some sample interaction with the program might look like this.
Enter first number ,operators and second
number 12+100 Answer =112
Do another (Y/N)?N
58*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    float n1,n2;
    char o;
    while(true)
    {
    cout<<"Enter first number ,operators and second number :";
    cin>>n1>>o>>n2;
    /*int flag=0;
    for(int i=0;i<strlen(o);i++)
    {
        if(o[i]>=0 && o[i]<=9)

    }*/
    switch (int(o))
    {
    case int('+') : cout<<"Answer ="<<n1+n2;
        break;
    case int('-') :cout<<"Answer ="<<n1-n2;
        break;
    case int('*') :cout<<"Answer ="<<n1*n2;
        break;
    case int('/') :cout<<"Answer ="<<n1/n2;
        break;
    default:
        break;
    }
    cout<<"\nDo another (Y/N)?";
    cin  >>  o;
    if(o!='Y')
    break;
    }
    return 0;
}