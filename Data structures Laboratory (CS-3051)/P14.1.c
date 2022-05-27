// Program to implement queue
// to be used to implement bsf
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct graph
{
    int key;
};
struct linkedlist
{
    struct graph *g;
    struct linkedlist *next;
};

// queue of nodes to implement  bfs
struct linkedlist *queue_front = NULL, *queue_rear = NULL;
void inqueue(struct graph *g)
{
    struct linkedlist *trv = queue_front;
    if (trv == NULL)
    {
        queue_front = (struct linkedlist *)malloc(sizeof(struct linkedlist));
        queue_front->g = g;
        queue_front->next = NULL;
        queue_rear=queue_front;
    }
    else
    {
        queue_rear->next = (struct linkedlist *)malloc(sizeof(struct linkedlist));
        queue_rear = queue_rear->next;
        queue_rear->g = g;
        queue_rear->next = NULL;
    }
}
struct graph *dequeue()
{
    struct graph *d = NULL;
    if (queue_front == NULL)
    {
        return d;
    }
    else
    {
        d = queue_front->g;
        struct linkedlist *temp = queue_front;
        queue_front = queue_front->next;
        free(temp);
        return d;
    }
}

void main()
{
}