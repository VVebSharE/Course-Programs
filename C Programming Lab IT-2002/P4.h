//Write a program to find the roots of quadratic equation using functions and switch statement. 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
void sol(float,float,float );
int main4()
{
    system("cls");
    float a,b,c;
    printf("Enter the coefficient of x^2 : ");
    scanf("%f",&a);
    printf("Enter the coefficient of x : ");
    scanf("%f",&b);
    printf("Enter the constant term : ");
    scanf("%f",&c);
    printf("\nThe quadratic equation is :\n    %0.2fx^2 +%0.2fx +%0.2f = 0\n",a,b,c);
    sol(a,b,c);
    getch();
    system("cls");
    return 0;
}
void sol(float a,float b,float c )
{
    float d2;
    d2= b*b-4*a*c;
    
    switch(d2<0)
    {
        case 1:
        {
        	printf("Solutions are complex\n");
    	    float d=sqrt(-d2); 
    	    float x,y;
            x=(-b*b)/(2*a);
            y=d/(2*a);
	        printf("Solution 1 :%0.2f + i%0.2f",x,y);
            printf("\nSolution 2 :%0.2f - i%0.2f",x,y);
	        break;
        }
        case 0:
        {
            printf("Solutions are real");
    	    float d=sqrt(d2); 
    	    float x,y;
            x=(-b)/(2*a);
            y=d/(2*a);
	        printf("\nSolution 1 :%0.2f",x+y);
            printf("\nSolution 2 :%0.2f",x-y);
	        break;
        }

        
    }
}
