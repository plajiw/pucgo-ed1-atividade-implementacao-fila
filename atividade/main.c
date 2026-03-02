#include <stdio.h>
#include "queue.h"

int main()
{
    Queue q;
    initQueue(&q);
    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);

    firstElement(&q);

    dequeue(&q);

    firstElement(&q);

    enqueue(&q, 4);
    enqueue(&q, 5);
    enqueue(&q, 6);

    indexElement(&q, 3);

    getchar();
    return 0;
}