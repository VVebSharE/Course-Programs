//Write a program to find the sort numbers using the Quick sort Algorithm.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void sort(int arr[],int a,int b,int s);
int main9()
{
    system("cls");
    int arr[100],s;
    printf("Enter the size of array :");
    scanf("%d",&s);
    for(;s>100 ||s<0;)
    {
        printf("\nEnter correct size of array (between 0 to 100) :");
        scanf("%d,&s");
    }
    printf("Enter the no.s \n");
    for(int i=0;i<s;i++)
    {
        printf("Enter no. %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    sort(arr,0,s-1,s);
    printf("\nFinal sorted array is :\n");
    for(int i=0;i<s;i++)
    {
        printf("%d  ",arr[i]);
    }
    getch();
    system("cls");
    return 0;
}
void sort(int arr[],int left , int right,int s)
{   
    printf("\narray  :");
    for(int i=0;i<s;i++)
    {
        printf("%d  ",arr[i]);
    }
    int pivot=left;
    for(int i=left+1;i<=right;i++)
    {
        if(arr[pivot]>arr[i])
        for(int j=i ;j>pivot;j--)
        {
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
        }
        pivot++;
    }
    if(pivot-left>1)
    sort(arr ,left,pivot-1,s);
    if(right-pivot>1)
    sort(arr,pivot+1,right,s);
    
}