//Write a program to find the compute the Fibonacci series.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main11()
{
    system("cls");
    int n,seed1=0,seed2=1;
    printf("Enter the no. of elemens you want to print of Fibonacci series :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        seed2+=seed1; 
        printf("    %d",seed1);
        seed1=seed2-seed1;
    }

    getch();
    system("cls");
    return 0;
}