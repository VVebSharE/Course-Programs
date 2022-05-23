/*Write a program to find the average male height & average female heights in the class
(input is in form of sex code, height).*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{   
    system("cls");
    int n,nf=0,nm=0;
    float am=0,af=0,height;
    char sex_code;
    printf("Enter total no. of students in class : ");
    scanf("%d",&n);
    printf("Enter sex-code('M'/'F') and height(in cm.) of each students one by one in the class : \n\n");
    for(int i=1;i<=n;i++)
    {
        printf("Enter sex-code of student %d :",i);
        scanf("%c",&sex_code);
        for( ;sex_code!='F' && sex_code!='M'; )
        {
            printf("\nEnter valid sex-code('M'/'F') of student %d :",i);
            scanf("%c",&sex_code);
        }
        printf("Enter height of student %d : ",i);
        scanf("%f",&height);
        if(sex_code=='F')
        {
            af=(af*nf+height)/(nf+1);
            nf++;
        }
        else
        {
            am=(am*nm+height)/(nm+1);
            nm++;
        }
        printf(" \n");
    }
    printf("\n");
    printf("Average female height in class : %f cm",af);
    printf("\n");
    printf("Average male height in class : %f cm",am);

    
    getch();
    system("cls");
    return 0;
}