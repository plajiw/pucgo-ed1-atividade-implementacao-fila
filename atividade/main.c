#include <stdio.h>
#include "queue.h"

int main()
{
    Queue q;
    initQueue(&q);
    enqueue(&q, 1);
    // enqueue(&q, 2);
    // enqueue(&q, 3);

    dequeue(&q);

    getchar();
    return 0;
}