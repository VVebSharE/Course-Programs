//Write a program to find the  read a string and write it in reverse order.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void w_rev_s(char a[]);
int main7()
{
    system("cls");
    char str[100];
    printf("Enter the string \n");
    gets(str);
    w_rev_s(str);
    getch();
    system("cls");
    return 0;
}
void w_rev_s(char str[])
{
    printf("Reverse of entred string is :");
    for(int i=strlen(str)-1;i>=0;i--)
    printf("%c",str[i]);
}