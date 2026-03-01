#include "queue.h"

#include <stdlib.h>

#include "node.h"

void initQueue(Queue* q)
{
    q->head = NULL;
    q->tail = NULL;
    q->size = 0;
}

bool isEmpty(Queue* q)
{
    return q->head == NULL && q->tail == NULL ? true : false;
}

void enqueue(Queue* q, int item)
{
    Node* newNode;
    newNode = createNode(item, NULL);

    if (isEmpty(q))
        q->head = newNode;
    else
        q->tail->next = newNode;

    q->tail = newNode;
    q->size++;
}

void dequeue(Queue* q)
{
    if (isEmpty(q))
        return;

    if (q->head->next == NULL)
    {
        q->tail = NULL;
        q->size = 0;
        free(q->head);
        return;
    }

    Node* aux = q->head->next;
    free(q->head);
    q->head = aux;
    q->size--;
}