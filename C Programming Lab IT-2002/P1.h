//Write a program to find the largest of three numbers(if-then-else).
#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
int main1()
{    
    system("cls");

    int num1, num2, num3;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("\nEnter second number: ");
    scanf("%d", &num2);
    printf("\nEnter third number: ");
    scanf("%d", &num3);

    printf("\nLargest number is: ");
    if (num1 < num2)
    {
        if (num3 < num2)
        {
            printf("%d",num2);
        }
        else
        {
            printf("%d",num3);
        }
    }
    else
    {
        if (num3 < num1)
        {
            printf("%d",num1);
        }
        else
        {
            printf("d",num3);
        }
    }
getch();
system("cls");

}
