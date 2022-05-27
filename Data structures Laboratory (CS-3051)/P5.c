/*5. Write a menu driven program to perform various operations on strings (string length, reverse,
concatenate, comparison) using user defined programs.*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define N 100
int string_length(char str[])
{
    int i=0;
    for(;i<N;i++)
    {
        if(str[i]=='\0')
        return i;
    }
    return -1;
}
char* reverse(char str[])
{
  int i=string_length(str)-1,j=0;
  char *rev=(char*)malloc(100);
  for(;i>=0 && i<100;i-- , j++ )
  {
      rev[j]=str[i];
  }
  rev[j]='\0';
  
  return rev;  
}
char* concatinate(char str1[],char str2[])
{
    int i=string_length(str1),j=0;
    for(;j<100 && str2[j]!='\0';j++, i++)
    {
        str1[i]=str2[j];
    }
    str1[i]='\0';
    return str1;
}
int comparison(char str1[],char str2[])
{
    for(int i=0;i<100;i++)
    if(str1[i]!=str2[i])
    return str1[i]-str2[i];
    else if(str1[i]=='\0')
    return 0;
    return 100;

}
void main()
{
    printf("\e[1;1H\e[2J");
    while(1)
    {
    printf("Select from menu and enter corresponding value :\n"
            "Menu:\n"
            "string length : enter 1\n"
            "reverse       : enter 2\n"
            "concatenate   : enter 3\n"
            "comperison    : enter 4\n"
            "quit          : enter any another no. :");
    int choise=0;
    scanf("%d",&choise);
    if(choise==1)
    {\
        printf("Enter the string :");
        char str[100];
        scanf("%s",str);
        printf("length of string is %d\n",string_length(str));
    }   
        
        
    else if(choise==2) 
    {
        printf("Enter the string :");
        char str[100];
        scanf("%s",str);
        printf("Reverse of string is %s\n",reverse(str));
    }    
        
    else if(choise==3)
    { 
        printf("Enter first string :");
        char str1[100];
        scanf("%s",str1);
        printf("Enter second string :");
        char str2[100];
        scanf("%s",str2);
        printf("Concatination of strings is %s\n",concatinate(str1,str2));
    }
        
        
    else if(choise==4) 
    {
        printf("Enter first string :");
        char str1[100];
        scanf("%s",str1);
        printf("Enter second string :");
        char str2[100];
        scanf("%s",str2);
        int r=comparison(str1,str2);
        if(r==0)
        printf("Both strings are same\n");
        else if(r>1)
        printf("First string is greater\n");
        else
        printf("Second string is greater\n");
    }

    else
    break;
    }

    getch();
    printf("\e[1;1H\e[2J");
}
