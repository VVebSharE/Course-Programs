//Write a program to  multiply two matrices.
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void pm(int a[][10],int nr,int nc);
void sm(int a[][10],int nr,int nc);
void mm(int a[][10],int b[][10],int ab[][10],int ar,int ac, int bc);
int main6()
{
    system("cls");
    int m1[10][10],m2[10][10],m12[10][10],nr1=0,nc1=0,nr2=0,nc2=0,nr12,nc12;
        
        
        printf("Enter no of rows    in first matrix :");
        scanf("%d",&nr1);
            for(;!(nr1<=10 && nr1>0); )
            {
                printf("Re-enter the correct no. of rows (b/w 0 to 10) :");
                scanf("%d",&nr1);
            }
        printf("Enter no of columns in first matrix :");
        scanf("%d",&nc1);
            for(;!(nc1<=10 && nc1>0); )
            {
                printf("Re-enter the correct no. of columns (b/w 0 to 10) :");
                scanf("%d",&nc1);
            }
    printf("\nEnter elements of matrix 1\n");
    sm(m1,nr1,nc1);


        printf("\nNo of rows in second matrix =no. of coulmns in first matrix as we are multiplying them \n");
        nr2=nc1;
        printf("Enter no of columns in second matrix :");
        scanf("%d",&nc2);
            for(;!(nc2<=10 && nc2>0); )
            {
                printf("Re-enter the correct no. of columns (b/w 0 to 10) :");
                scanf("%d",&nc2);
            }

    nr12=nr1;
    nc12=nc2;
    printf("\nEnter elements of matrix 2\n");
    sm(m2,nr2,nc2);
    printf("\nMatrix 1\n");
    pm(m1,nr1,nc1);
    printf("Matrix 2\n");
    pm(m2,nr2,nc2);
    mm(m1,m2,m12,nr1,nc1,nc2);
    printf("\nMatrix 1 multplication 2\n");
    pm(m12,nr12,nc12);
    
    getch();
    system("cls");
    return 0;
}


void sm(int a[][10],int nr,int nc)
{
    for(int i=0;i<nr;i++)
    {
        for(int j=0;j<nc;j++)
        {
            printf("Enter element at row %d and coulmn %d : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
}

void pm(int a[][10],int nr,int nc)
{
    printf("It is a %d by %d matrix\n",nr,nc);
    for(int i=0;i<nr;i++)
    {
        for(int j=0;j<nc;j++)
        printf("%d    ",a[i][j]);
        printf("\n");
    }
}

void mm(int a[][10],int b[][10],int ab[][10],int ar,int ac, int bc)
{
    for(int i=0;i<ar;i++)
    
    {
        for(int j=0;j<bc;j++)
        {
            int temp=0;
            for(int n=0;n<ac;n++)
            {
                temp+=(a[i][n]*b[n][j]);
            }
            ab[i][j]=temp;
        }
        printf("\n");
    }
}