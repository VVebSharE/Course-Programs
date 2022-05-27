// 15.Write a program to implement depth first search on a graph.
// to implement dfs we add flag to our graph structure
// using explicit stack
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct graph
{
    int key;
    int flag;
    // flag=1 node not viewed
    // flag=2 node in stack
    // flag=3 node out of stack
    struct graph *next_in_main_list;
    struct linkedlist
    {
        struct graph *g;
        struct linkedlist *next;
    } * adjacency_list;
} * root;

// queue of nodes to implement  bfs
struct linkedlist *stack_top = NULL;
void push(struct graph *g)
{
    struct linkedlist *new_top = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    new_top->g = g;
    new_top->next = stack_top;
    stack_top = new_top;
}
struct graph *pop()
{
    struct graph *d = NULL;
    if (stack_top == NULL)
    {
        return d;
    }
    else
    {
        d = stack_top->g;
        struct linkedlist *temp = stack_top;
        stack_top = stack_top->next;
        free(temp);
        return d;
    }
}
void make_flag_one()
{
    struct graph *node = root;
    while (node != NULL)
    {
        node->flag = 1;
        node = node->next_in_main_list;
    }
}

void dfs()
{
    make_flag_one();
    if (root != NULL)
    {
        push(root);
        struct graph *stack = pop();
        while (stack != NULL)
        {
            if(stack->flag != 3)
            {
                printf("%d \n", stack->key);
                struct linkedlist *l = stack->adjacency_list;
                while (l != NULL)
                {
                    if (l->g->flag != 3)
                    {
                        push(l->g);
                        l->g->flag = 2;
                    }
                    l = l->next;
                }
                stack->flag = 3;
            }
            stack = pop();
        }
    }
}

void add_node(int key)
{
    struct graph *temp = (struct graph *)malloc(sizeof(struct graph));
    temp->key = key;
    temp->adjacency_list = NULL;
    temp->next_in_main_list = NULL;
    if (root == NULL)
    {
        root = temp;
        return;
    }
    struct graph *node = root;
    while (node->next_in_main_list != NULL)
    {
        if (node->key == key)
        {
            printf("node with key %d already present.\n", key);
            free(temp);
            return;
        }
        node = node->next_in_main_list;
    }
    if (node->key == key)
    {
        printf("node with key %d already present.\n", key);
        free(temp);
        return;
    }
    node->next_in_main_list = temp;
}
void add_edge(int key1, int key2)
{

    struct graph *temp1 = NULL, *temp2 = NULL, *node = root;
    while (node != NULL)
    {
        if (node->key == key1)
            temp1 = node;
        if (node->key == key2)
            temp2 = node;

        node = node->next_in_main_list;
    }
    if (temp1 == NULL)
    {
        printf("No node with key %d\n", key1);
        return;
    }
    if (temp2 == NULL)
    {
        printf("No node with key %d\n", key2);
        return;
    }
    struct linkedlist *t = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    t->g = temp2;
    t->next = NULL;

    if (temp1->adjacency_list == NULL)
    {
        temp1->adjacency_list = t;
        return;
    }
    struct linkedlist *t1 = temp1->adjacency_list;
    while (t1->next != NULL)
    {
        if (t1->g->key == key2)
        {
            printf("Edge b/w %d and %d already exist.\n", key1, key2);
            free(t);
            return;
        }
        t1 = t1->next;
    }
    if (t1->g->key == key2)
    {
        printf("Edge b/w %d and %d already exist.\n", key1, key2);
        free(t);
        return;
    }
    t1->next = t;
}
void show()
{
    if (root == NULL)
    {
        printf("graph is empty:\n");
        return;
    }
    struct graph *node = root;
    while (node != NULL)
    {
        printf("%d  : ", node->key);
        struct linkedlist *l = node->adjacency_list;
        while (l != NULL)
        {
            printf("%d ", l->g->key);
            l = l->next;
        }
        printf("\n");

        node = node->next_in_main_list;
    }
}
int main()
{
    printf("\e[1;1H\e[2J");
    root = NULL;

    while (1)
    {
        int choice = 0;
        printf("Enter :\n"
               "1 to add a node in graph\n"
               "2 to add a edge in grpah\n"
               "3 to show graph as adjecency list\n"
               "4 to print dfs of graph\n"
               "any another key to quit : ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            int key;
            printf("Enter the key :");
            scanf("%d", &key);
            add_node(key);
        }
        else if (choice == 2)
        {
            int key1;
            int key2;
            printf("Enter the key of first node:");
            scanf("%d", &key1);
            printf("Enter the key of second node:");
            scanf("%d", &key2);
            add_edge(key1, key2);
        }
        else if (choice == 3)
        {
            show();
        }
        else if (choice == 4)
        {
            dfs();
        }
        else
            break;
    }

    getch();
    printf("\e[1;1H\e[2J");
    return 0;
}
