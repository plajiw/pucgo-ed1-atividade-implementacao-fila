#include "queue.h"
#include "node.h"
#include <stdlib.h>

void initQueue(Queue *p)
{
    p->head = NULL;
    p->head = NULL;
    p->size = 0;
}

bool isEmpty(Queue *p)
{
    return p->head == NULL && p->tail == NULL ? true : false;
}

void enqueue(Queue *p, int item)
{
    Node *newNode;
    newNode = createNode(item, NULL);

    if (isEmpty(p))
    {
        p->head = newNode;
        p->tail = newNode;
    }

    p->tail = newNode;
}

void dequeue(Queue *p)
{
    

    if (!isEmpty(p))
    {
        Node *aux;
        aux = createNode(p->head, NULL);

        
    }
    
}