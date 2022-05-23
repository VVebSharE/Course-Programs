//Write a program using arrays to find the largest and second largest no.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main5()
{
    system("cls");
    int arr[100],s;
    printf("Enter the size of array : ");
    scanf("%d",&s);
    for(;(s>100) || (s<=0);)
    {
        printf("Re-enter the correct(less then 100) size of array : ");
        scanf("%d",&s);
    }
    printf("Enter the elements of array :\n\n");

    for(int i=0;i<s;i++)
    {
        switch(i)
        {
            case 0:
            {printf("Enter 1st element : ");
            scanf("%d",&arr[i]);break;}
            case 1:
            {printf("Enter 2nd element : ");
            scanf("%d",&arr[i]);break;}
            case 2:
            {printf("Enter 3rd element : ");
            scanf("%d",&arr[i]);break;}
            default:
            {printf("Enter %dth element : ",i+1);
            scanf("%d",&arr[i]);break;}

        }
    }
    int fl=arr[0],sl=arr[0];
    for(int i=1;i<s;i++)
    {
        if(fl<arr[i])
        {
            sl=fl;
            fl=arr[i];
        }
    }
    printf("\nFirst  largest number in array is :  %d",fl);
    printf("\nsecond largest number in array is :  %d",sl);
    getch();
    system("cls");
    return 0;
}