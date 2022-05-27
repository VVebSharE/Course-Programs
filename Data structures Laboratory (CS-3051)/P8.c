/*8. Write a menu driven program for matrices to do the following operation depending on whether the
operation requires one or two matrices
 Addition and Subtraction of two matrices
 Finding upper and lower triangular matrices
 Trace of a matrix, Transpose of a matrix, Check of matrix symmetry*/
#include<stdio.h>
#include<conio.h>
struct matrix
{
   int m[100][100];
   int r,c; 
};
void entervalues(struct matrix *mat)
{
    for(int i=0;i<mat->r;i++)
    for(int j=0;j<mat->c;j++)
    scanf("%d",&mat->m[i][j]);
    printf("\nMatrix you enterd :\n");
    for(int i=0;i<mat->r;i++)
    { for(int j=0;j<mat->c;j++)
    printf("%d   ",mat->m[i][j]);
    printf("\n");}

}
int entern(int roworcolumn, int xorces)
{
    int n;
    char a[3][20]={"row","column","rows or column"};
    char b[2][5]={"x","ces"};
    here :
    printf("Enter number of %ss of matri%s :",a[roworcolumn-1],b[xorces-1]);
    scanf("%d",&n);
    if(n>100)
    goto here;
    return n;
}
void printm(struct matrix mat)
{
    for(int i=0;i<mat.r;i++)
    {
        for(int j=0;j<mat.c;j++)
        printf("%d  ",mat.m[i][j]);
        printf("\n");
    }
}

struct matrix addm(struct matrix mat1,struct matrix mat2)
{
    for(int i=0;i<mat1.r;i++)
    for(int j=0;j<mat1.c;j++)
    mat1.m[i][j]+=mat2.m[i][j];
    return mat1;
}
struct matrix subm(struct matrix mat1,struct matrix mat2)
{
    for(int i=0;i<mat1.r;i++)
    for(int j=0;j<mat1.c;j++)
    mat1.m[i][j]-=mat2.m[i][j];
    return mat1;
}
struct matrix upm(struct matrix mat)
{
    for(int i=0;i<mat.r;i++)
    for(int j=0;j<mat.c;j++)
    if(i-j>0)
    mat.m[i][j]=0;
    return mat;
}
struct matrix lom(struct matrix mat)
{
    for(int i=0;i<mat.r;i++)
    for(int j=0;j<mat.c;j++)
    if(j-i>0)
    mat.m[i][j]=0;
    return mat;
}
int trm(struct matrix mat)
{
    int trm=0;
    if(mat.c!=mat.r)
    return -1;
    else
    for(int i=0;i<mat.r;i++)
    for(int j=0;j<mat.c;j++)
    if(i==j)
    trm+=mat.m[i][j];

    return trm;
    
}
struct matrix tram(struct matrix mat)
{
    struct matrix tram;
    tram.c=mat.r;
    tram.r=mat.c;
    for(int i=0;i<mat.r;i++)
    for(int j=0;j<mat.c;j++)
    tram.m[j][i]=mat.m[i][j];

    return tram;
} 
int issy(struct matrix mat)
{
    if(mat.c!=mat.r)
    return 0;
    else
    {
        struct matrix tr=tram(mat);
        for(int i=0;i<mat.r;i++)
        for(int j=0;j<mat.c;j++)
        if(mat.m[i][j]!=tr.m[i][j])
        return 0;
    }
    return 1;
}


void main()
{
    printf("\e[1;1H\e[2J");
    int choise,end=1;
    while(end)
    {
    choise=0;
    printf("Select from menu\n");
    printf("menu :\n"
            "Addition and Subtraction of two matrices                           :Enter 1\n"
            "Finding upper and lower triangular matrices                        :Enter 2\n"
            "Trace of a matrix, Transpose of a matrix, Check of matrix symmetry :Enter  3\n"
            "Quit                                                               :Enter any another key :\n");
    scanf("%d",&choise);
    if(choise==1)
    {
        struct matrix mat1,mat2;
        mat1.r=entern(1,2);
        mat1.c=entern(2,2);
        mat2=mat1;
        printf("Enter the elements of first matrix :\n");
        entervalues(&mat1);
        printf("Enter the elements of second matrix :\n");
        entervalues(&mat2);
        printf("Addition Matrix: \n");
        printm(addm(mat1,mat2));
        printf("Subtraction Matrix: \n");
        printm(subm(mat1,mat2));
        
    }
    else if(choise==2)
    {
        struct matrix mat;
        mat.r=entern(3,1);
        mat.c=mat.r;
        printf("Enter the elements of matrix :\n");
        entervalues(&mat);
        printf("Upper triangular Matrix: \n");
        printm(upm(mat));
        printf("Lower trangular Matrix: \n");
        printm(lom(mat));
    }
    else if(choise==3)
    {
        struct matrix mat;
        mat.r=entern(1,1);
        mat.c=entern(2,1);
        printf("Enter the elements of matrix :\n");
        entervalues(&mat);
        if(trm(mat)>=0)
        printf("Trace of a matrix :%d\n",trm(mat));
        else
        printf("Trace of matrix is undefined\n");
        printf("Transpose of matrix:\n");
        printm(tram(mat)); 
        if(issy(mat))
        printf("Matrix is symmetric\n");
        else
        printf("matrix is non symmetric\n");
    }
    else
    end=0;
    }
    getch();
    printf("\e[1;1H\e[2J");
}
