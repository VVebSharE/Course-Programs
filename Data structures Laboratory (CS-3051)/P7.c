//7. Write a program to implement queue using arrays.
#include<stdio.h>
#include<conio.h>
#define N 5
void enqueue(int *queue)
{
    if(queue[0]>=N-2)
    printf("Overflow\n");
    else{
        printf("Enter the element to fill :");
        if(queue[0]==0)
        queue[1]=2;
        if((queue[0]+queue[1])>=N)
        scanf("%d",&queue[(queue[0]+queue[1])%N + 2]);
        else
        scanf("%d",&queue[(queue[0]+queue[1])]);
        queue[0]++;
    }
}
void dequeue(int *queue)
{
    if(queue[0]<=0)
    printf("Underflow\n");
    else{
        printf("Element exit :%d\n",queue[queue[1]]);
        queue[0]--;
        if(queue[1]==N-1)
        queue[1]=2;
        else
        queue[1]=(queue[1]+1);
    }
}
void main()
{
    printf("\e[1;1H\e[2J");
    int queue[N]={0},choise,end=1;//assuming queue [0] stores queue size and queue[1] index of front;
    while(end)
    {
    choise=0;
    printf("\nSelect the operation you want to do on queue :\n"
            "Enqueue :Enter 1\n"
            "Dequeue  :Enter 2\n"
            "Quit : Enter any another no. :");
    scanf("%d",&choise);
    if(choise==1)
    enqueue(queue);
    else if(choise==2)
    dequeue(queue);
    else
    end=0;
    getch();
    if(queue[0]!=0)
    printf("now the queue is :");
    else
    printf("queue is empty");
    for(int i=queue[1],j=0;j<queue[0];i++,j++)
    {
        printf("%d  ",queue[i]);
        if(i==N-1)
        i=1;

    }
    }
    
    printf("\e[1;1H\e[2J");
}
