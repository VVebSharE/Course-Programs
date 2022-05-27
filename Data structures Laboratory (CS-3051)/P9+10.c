//9. Write a program to implement Binary search tree.
//10.Write a program to perform insertion & deletion operation on Binary Search trees.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define COUNT 10
struct bst
{
    int node;
    struct bst *left;
    struct bst *right;
};
void show(struct bst *root,int space)
{
    if(root==NULL)
    {
        for(int i=0;i<space;i++)
        printf("|");
        printf("N\n");
        return;
    }

    for(int i=0;i<space;i++)
    printf("|");
    printf("%d\n",root->node);
    show(root->left,space+1);
    show(root->right,space+1);
}
struct bst* insert(struct bst *root,int n)
{
    if( root==NULL)
    {
        root=(struct bst*)malloc(sizeof(struct bst));
        root->node=n;
        root->left=NULL;
        root->right=NULL;
    }
   
    else if(root->node>=n)
        root->left=insert(root->left,n);

    else
        root->right=insert(root->right,n);

    return root;

}
struct bst* searchn(struct bst *root,int n)
{
    if(root==NULL)
    return NULL;
    else if(root->node==n)
    return root;
    else if(root->node>n)
    return searchn(root->left,n);
    else
    return searchn(root->right,n);

}

struct bst* deleten(struct bst *e)
{
    struct bst *temp=e;
    struct bst *r=e;
    if(e->left!=NULL)
    {
        e=e->left;
        if(e->right==NULL)
        {
            e->right=temp->right;
            r=e;
        }
        else
        {
            while((e->right)->right!=NULL)
            e=e->right;

            
            temp->node=(e->right)->node;
            temp=e->right;
            e->right=temp->left;
            
        }
        free(temp);
        return r;
    }
    else 
    {
        struct bst* d=temp->right;
        free(temp);
        return d;
    }
}

struct bst* delete(struct bst *root,int n)
{
    struct bst *b=root;
    int d=0;
    if(b==NULL)
    printf("Tree is empty\n");
    else if(b->node==n)
    {
        root=deleten(b);
    }
    else
    {
        while(b!=NULL)
        {
            if(b->right!=NULL)
            {if((b->right)->node==n)
            {
                b->right=deleten(b->right);
                printf("element %d deleted\n",n);
                d=1;
                break;
            }}
            if(b->left!=NULL)
            {if((b->left)->node==n)
            {
                b->left=deleten(b->left);
                printf("element %d deleted\n",n);
                d=1;
                break;
            }}
            if((b->node)>n)
            b=b->left;
            else 
            b=b->right;
        }
        if(d==0)
        printf("%d not in tree\n",n);
    }
    return root;
}


void main()
{
    printf("\e[1;1H\e[2J");
    int choise,end=1;
    struct bst *root=NULL;
    while(end)
    {
    choise=0;
    int n=0;
    printf("\nEnter 1 to enter new nodes, 2 to delete a node, 3 to show the tree,4 to search for an element in tree and any another key to quit: ");
    scanf("%d",&choise);
    if(choise==1)
    {
        int howmany;
        printf("how many nodes you want to enter :");
        scanf("%d",&howmany);
        for(int i=0;i<howmany;i++)
        {
            printf("Enter the %d th value to insert in binary search tree :",i);
            scanf("%d",&n);
            root=insert(root,n);
        }
    }
    else if(choise==2)
    {
        printf("Enter the value to delete form binary search tree:");
        scanf("%d",&n);
        root=delete(root,n);
    }
    else if(choise==3)
    {
        show(root,0);
    }
    else if(choise==4)
    {

        printf("Enter the value you want to see if it there in tree:");
        scanf("%d",&n);
        if(searchn(root,n)==NULL)
        printf("Element %d is not present in tree.",n);
        else
        printf("Element %d is present in tree.",n);       
    }
    else
    end=0;
    }
    getch();
    printf("\e[1;1H\e[2J");
}
