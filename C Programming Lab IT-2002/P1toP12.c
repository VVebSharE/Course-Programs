//mix of all.
#include"p1.h"
#include"p2.h"
#include"p3.h"
#include"p4.h"
#include"p5.h"
#include"p6.h"
#include"p7.h"
#include"p8.h"
#include"p9.h"
#include"p10.h"
#include"p11.h"
#include"p12.h"


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()



{
    system("cls");
    int x=0;
    printf(
     
     "Write a program to find the largest of three numbers (if-then-else).                                             1\n"
     "Write a program to find the largest number out of ten numbers (for statement).                                   2\n"
     "Write a program to find the average male height & average female heights in the class\n"
     "(input is in form of sex code, height).                                                                          3\n"
     "Write a program to find roots of quadratic equation using functions and switch statement.                        4\n"
     "Write a program using arrays to find the largest and second largest no.                                          5\n"
     "Write a program to multiply two matrices.                                                                        6\n"
     "Write a program to read a string and write it in reverse order.                                                  7\n"
     "Write a program to concatenate two strings.                                                                      8\n"
     "Write a program to sort numbers using the Quick sort Algorithm.                                                  9\n"
     "Represent a deck of playing cards using arrays.                                                                  10\n"
     "Write a program to compute the Fibonacci series.                                                                 11\n"
     "Write a program to find weather the number is palindrome or not.                                                 12\n"
     "\n\nEnter the no. in front of choice: ");
      
      scanf("%d",&x);
    
      system("cls");
       switch(x)
        {
            case 1: main1();break;
            case 2: main2();break;
            case 3: main3();break;
            case 4: main4();break;
            case 5: main5();break;
            case 6: main6();break;
            case 7: main7();break;
            case 8: main8();break;
            case 9: main9();break;
            case 10: main10();break;
            case 11: main11();break;
            case 12: main12();break;
        }
    getch();
    system("cls");
    return 0;
}