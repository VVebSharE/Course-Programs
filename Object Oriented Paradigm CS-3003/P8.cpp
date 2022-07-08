/*8. Write a program that create a binary files by reading the data from the students from the terminal.
The data of each student consist of roll no, name( a string of 30 or lesser no. of character) and marks.*/
#include<iostream>
#include<fstream>
using namespace std;
struct stdata
{
    int roll_no;
    char name[31];
    int marks;
};
int main()
{
    ofstream st;
    st.open("Students.dat",ios::out | ios::binary);
    if(!st)
    return 1;
    cout<<"Enter no. of students whose data you want to store in file :";
    int n=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        stdata t;
        cout<<"\nEnter the data of student no. "<<i+1<<" :";
        cout<<endl<<"roll no :";
        cin>>t.roll_no;
        cout<<"name :";
        cin>>t.name;
        cout<<"marks :";
        cin>>t.marks;
        st.write((char *) &t, sizeof(stdata));
        if(!st.good())
        return 3;
    }
    st.close();
    ifstream sta;
    sta.open("Students.dat",ios::in | ios::binary);
    if(!sta)
    return 2;
    cout<<"\n\nPrinting the data you have saved previously in file :"<<endl;
    stdata T;
    for(int i=0;i<n;i++)
    {
        sta.read((char*) &T, sizeof(stdata));
        if(!sta.good())
        return 4;
        cout<<"roll no :";
        cout<<T.roll_no;
        cout<<" name :";
        cout<<T.name;
        cout<<" marks :";
        cout<<T.marks;
        cout<<endl;
    }
    sta.close();

    
    return 0;
}
//echo %errorlevel% :command to see an error during file manipulation