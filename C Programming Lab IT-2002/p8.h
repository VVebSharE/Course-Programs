//Write a program to concatenate two strings.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
char *cons(char s1[],char s2[],char s12[]);
int main8()
{
    system("cls");
    char str1[100],str2[100],*str12;
    printf("Enter string 1 :\n");
    gets(str1);
    printf("Enter string 2 :\n");
    gets(str2);
    cons(str1,str2,str12);
    printf("Consentrated string is:\n%s",str12);

    getch();
    system("cls");
    return 0;
}
char *cons(char *s1,char *s2,char *s12)
{
    int l;
    for(l=0;s1[l]!='\0';l++)
    {
    s12[l]=s1[l];
    }
    for(int i=0;s2[i]!='\0';i++)
    {   
        s12[l]=s2[i];
        l++;
    }
    s12[l]='\0';
}