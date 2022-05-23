//Write a program to find the  find weather the number is palindrome or not.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void findp(int n);
int main12()
{
    system("cls");
    int no;
    printf("Enter the no :");
    scanf("%d",&no);
    findp(no);
    getch();
    system("cls");
    return 0;
}
void findp(int n)
{
    int rn=0,flag=0;

    for(int i=1;n>i;i*=10)
    {   
        
        rn+=((n/i)%10)*i;
    }
    if(rn==n)
    printf("No. %d entered is palndrome",n);
    else
    {
        printf("No. %d entered is not palindrome",n);
    }
    

}