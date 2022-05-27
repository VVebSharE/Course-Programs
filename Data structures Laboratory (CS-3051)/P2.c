//2. Write a program to print array elements in row and column major order.
#include<stdio.h>
#include<conio.h>
void main()
{
    printf("\e[1;1H\e[2J");
    int arr[100][100],row,column;
    
    corrr:
    printf("Enter no of rows (<=100 &  >0) :");
    scanf("%d",&row);
    if(row>100 || row <1)
    goto corrr;
    
    corrc:
    printf("Enter no of columns (<=100 &  >0) :");
    scanf("%d",&column);
    if(column>100 || column <1)
    goto corrc;


    printf("Enter elemets of array :\n");
    for(int i=0;i<row;i++)
    for(int j=0;j<column;j++)
    scanf("%d",&arr[i][j]);

    printf("Array: \n");
    for(int i=0;i<row;i++)
    {   for(int j=0;j<column;j++)
            printf("%d  ",arr[i][j]);
        printf("\n");
    }

    printf("\nArray in row major order: \n");
    for(int i=0;i<row;i++)
    {   for(int j=0;j<column;j++)
            printf("%d  ",arr[i][j]);
        
    }

    printf("\nArray in column major order: \n");
    for(int i=0;i<column;i++)
    {   for(int j=0;j<row;j++)
            printf("%d  ",arr[j][i]);
        
    }

    getch();
    printf("\e[1;1H\e[2J");
}