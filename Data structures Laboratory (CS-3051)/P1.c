//1. Write a program to insert and delete an element at a specified location in an array.
#include<stdio.h>
#include<conio.h>
void main()
{
    printf("\e[1;1H\e[2J");
    int arr[100],s,casecon;
    here:
    printf("Enter size of array(<=100 & >=1) : ");
    scanf("%D",&s);
    if(s>100 || s<1)
    goto here;
    printf("Enter elements of array : \n");
    for(int i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    here2: 
    printf("\n\nWhat you want to do now :\n");
    printf("insert an element : enter 1. \n"
    "delete an element : enter 2. \n"
    "quit              : enter any another value. \n");
    scanf("%d",&casecon);
    int l,e,c;
    c=casecon;
    casecon=0;
    switch (c)
    {
    case 1 :
        
        if(s>=100)
        {
            printf("##################OVERFLOW##################");
            goto here2;
        }

        here1 :
        printf("Enter the location(from 1, >=1 & <=%d) at which you want to insert an element : ",s+1);
        scanf("%d",&l);
        if(l>s+1 || l<1 )
        goto here1;
        printf("Enter the element you want to enter at location %d : ",l);
        scanf("%d",&e);
        for(int i=l-1;i<=s;i++)
        {
            int temp=arr[i];
            arr[i]=e;
            e=temp;
        }
        s++;
        
        printf("\nNow the array is : \n");
        for(int i=0;i<s;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
        goto here2;
        break;
    case 2 :
    if(s==0)
    printf("##################UNDERFLOW##################");
    
    here3 :
        printf("Enter the location(from 1, >=1 & <=%d) at which you want to delete an element : ",s);
        scanf("%d",&l);
        if(l>s || l<1)
        goto here3;

        for(int i=l-1;i<s-1;i++)
        {
            arr[i]=arr[i+1];
        }
        s--;
        
        printf("Now the array is : \n");
        for(int i=0;i<s;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
        goto here2;
        break;
    default:
        break;
    }
    getch();
    // printf("\e[1;1H\e[2J");
    
}