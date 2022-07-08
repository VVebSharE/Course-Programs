/*9. A hospital wants to create a database regarding its indoor patients. The information to store include.
a) Name of the patient
b) Date of admission
c) Disease
d) Date of discharge
Create a structure to store the data (year, month, date as its members). Create a base class to store the
above information. The member function should include function to enter information and display a
list of all the patients in database Create a drive class to store the age of patients. List the information
about all to store the age of the patients. List the information about all the pediatric (less then twelve
years in age)*/
#include<iostream>
using namespace std;
class patients
{
    string Name;
    struct date
    {
        int year;
        int month;
        int day;
    }admission;
    string Disease;
    date discharge;
    public:
    void enterinformation()
    {
        cout<<"Enter Name :";
        cin>>Name;
        cout<<endl<<"Enter date of admission :";
        cin>>admission.day>>admission.month>>admission.year;
        cout<<endl<<"Enter Disease :";
        cin>>Disease;
        cout<<endl<<"Enter date of discharge :";
        cin>>discharge.day>>discharge.month>>discharge.year;
    }
    void displayinformation()
    {
        cout<<"Name :";
        cout<<Name;
        cout<<endl<<"Enter date of admission :";
        cout<<admission.day<<admission.month<<admission.year;
        cout<<endl<<"Enter Disease :";
        cout<<Disease;
        cout<<endl<<"Enter date of discharge :";
        cout<<discharge.day<<discharge.month<<discharge.year;
    }
};
class age : public patients
{
    public :
    int ageofpatient;
    
    void eneterage()
    {
        cout<<endl<<"Ente age :";
        cin>>ageofpatient;
    }
};
int main()
{
    age p[10];
    int n=10;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter detail of patient no. "<<i+1<<": ";
        p[i].enterinformation();
        p[i].eneterage();
    }
    cout<<"Here is the information about all the pediatric :"<<endl;
    for(int i=0;i<n;i++)
    {
        if(p[i].ageofpatient<12)
        p[i].displayinformation();

    }
    return 0;
}