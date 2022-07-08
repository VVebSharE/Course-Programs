/*14. Assume that a blank maintain two kinds of accounts for customer. One called as saving accounts
and another is current account . The saving account provides compound interest and withdrawal
facility but no cheque book facility, The current account provides cheque book facility but no
interest Current account holders should also maintain a minimum balance and if the balance false
below this level , a service charge is imposed.
Create a class account that store customer name, account number and type of account. From this
drive the classes cur_acct and sav_account to make them more specific to their requirement. Include
necessary member function in order to achieve the following task
a) Accept deposit from a customer and update the balance
b) Display the balance
c) Compute and deposit interest
d) Permit withdrawal and update the balance
e) Check for the minimum balance, impose penalty ,necessary and update the balance. f) Do not
use any
constructor , use member function to initialize the class members*/
#include<iostream>
using namespace std;
class account
{
    string name="aaa";
    int account_number=0;
    char type='U';
    int balance=0;
    public:
    int b()
    {return balance;}
    void deposit(int a=-1)
    {
        if(a==-1)
        {cout<<"Enter the amount to deposit :";
        cin>>a;}
        balance+=a;

    }
    void display()
    {
        cout<<"\nname :"<<name;
        cout<<"\naccount number :"<<account_number;
        cout<<"\naccount type :"<<type;
        cout<<"\nBalance :"<<balance;

    }
    void withdrawal(int a)
    {
        balance-=a;
    }

};
class cur_acct : public account
{
    public:
    void chequebook(account *obj,int a)
    {
        obj->deposit(a);
        withdrawal(a);

    }
    void minbalance()
    {
        if(b()< minb)
        withdrawal(serchar);


    }
    int minb;
    int serchar;


};
class sav_account : public account
{
    public:
    int interest_in_per;
    void compinter()
    {
        deposit((b()*interest_in_per)/100);
    }
    
};
int main()
{
    cur_acct c;
    c.display();
    return 0;
}