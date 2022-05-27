//6. Write a program to implement stack using arrays.
#include<stdio.h>
#include<conio.h>
void push(int *stack)
{
    if(stack[0]>=99)
    printf("Overflow\n");
    else{
        printf("Enter the element to push :");
        scanf("%d",&stack[stack[0]+1]);
        stack[0]++;
    }
}
void pop(int *stack)
{
    if(stack[0]<=0)
    printf("Underflow\n");
    else{
        printf("Element poped :%d\n",stack[stack[0]]);
        stack[0]--;
    }
}
void main()
{
    printf("\e[1;1H\e[2J");
    int stack[100]={0},choise,end=1;//assuming stack [0] stores stack size;
    while(end)
    {
    choise=0;
    printf("\nSelect the operation you want to do on stack :\n"
            "Push :Enter 1\n"
            "Pop  :Enter 2\n"
            "Quit : Enter any another no. :");
    scanf("%d",&choise);
    if(choise==1)
    push(stack);
    else if(choise==2)
    pop(stack);
    else
    end=0;
    if(stack[0]!=0)
    printf("now the stack is :");
    else
    printf("stack is empty");
    for(int i=0;i<stack[0];i++)
    printf("%d  ",stack[i+1]);
    }
    getch();
    printf("\e[1;1H\e[2J");
}
