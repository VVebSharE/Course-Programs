//12.Write a program to create a linked list & display elements of a linked list.

//13.Create a linked list and perform the following operation on it
//a) Add a node b) Delete a node c) Count no. of nodes

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct linkedlist
{
    struct linkedlist *link;
    int key;
    
};
typedef struct linkedlist ll ;

void countnodes(ll *front)
{
    int i=0;
    while (front!=NULL)
    {
        i++;
        front=front->link;
    }
    printf("There are %d no of nodes in the linked list\n",i);
    
}
void insert(ll **front)
{
    int n;
    printf("Enter the element to insert in linked list: ");
    scanf("%d",&n);
    ll *tnode=(ll*)malloc(sizeof(ll));
    if(tnode==NULL)
    {
        printf("HEAP OVERFLOW\n");
        return;
    }
    tnode->key=n;
    tnode->link=*front;
    *front=tnode;
}

void display(ll *front)
{
    while(front!=NULL)
    {
        printf("%d  ->",front->key);
        front=front->link;
    }
    printf("\n");
}

void del(ll **front)
{
    if(*front==NULL)
    printf("EMPTY LINKED LIST\n");
    else
    {
        while((*front)->link!=NULL)
        front=&(*front)->link;
        ll *tnode=*front;
        *front=NULL;
        printf("Value %d deleted\n",tnode->key);
        free(tnode);
           
    }
}
void main()
{
    printf("\e[1;1H\e[2J");
    ll *front=NULL; 
    int choise,end=1;
    while(end)
    {
    choise=0;
    int n=0;
    printf("Enter :\n"
            "To enter a node           :1\n"
            "To delete a node          :2\n"
            "To display the linked list:3\n"
            "To count no. of nodes     :4\n"
            "To quit                   :any another key :");
    scanf("%d",&choise);
    if(choise==1)
    {
        insert(&front);
    }
    else if(choise==2)
    {
        del(&front);
    }
    else if(choise==3)
    {
        display(front);
    }
    else if(choise==4)
    {
        countnodes(front);
    }
    else
    end=0;
    }

    
    getch();
    printf("\e[1;1H\e[2J");
}
