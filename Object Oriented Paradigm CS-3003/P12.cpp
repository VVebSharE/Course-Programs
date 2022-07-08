/*12. Write a function called reverse it ( ) that reverses a string( an array of char ) use a for loop that swap
the first and last characters, then the second and next to last character and so on .
the string should be passed to reversesit ( ), and print out the result. Use an input method that
allows embedded blanks. Test the program with Napoleon’s famous phrase , “Able was I ere I saw Elba”.*/
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
void reverseit(char *s)
{
    int l=strlen(s);
    //cout<<l<<endl;
    for(int i=0;i<strlen(s)/2;i++)
    {
        char t=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=t;

    }
    cout<<s;
}
int main()
{
    char s[1000];
    cout<<"Enter string :";
    fflush(stdin);
    scanf(" %[^\n]s",s);
    reverseit(s);
    return 0;
}