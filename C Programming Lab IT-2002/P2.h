//Write a program to find the largest number out of ten number(for statement).
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main2()
{   
    system("cls");
    int a[10];
    printf("Enter ten numbers:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int lar=0;
    printf("largest number out of ten is : ");
    for(int i=0;i<10;i++)
    {
        if(a[i]>lar)
        lar=a[i];
    }
    printf("%d",lar);
    getch();
    system("cls");
    return 0;
}