#include <stdio.h>
#include <stdlib.h>
struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct Queue *q)
{
    if (q->f == q->r)
    {
        return 1;
    }
    return 0;
}

int isFull(struct Queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}
void enQueue(struct Queue *q, int value)
{
    if (isFull(q))
    {
        printf("The Queue if Full no further element cannot be inserted\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = value;
    }
}

int deQueue(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("The Queue is Empty\n");
    }
    else
    {
        q->f++;
        return q->arr[q->f];
    }
}

void display(struct Queue*q){
    if (q->r==-1)
    {
        printf("Queue is Empty\n");
    }
    else{
        for (int i = q->f+1; i <= q->r; i++)
        {
            printf("Elements are %d\n",q->arr[i]);
        }
    }
}

int main()
{
    struct Queue *q=(struct Queue*)malloc(sizeof(struct Queue));
    q->size = 70;
    q->f = -1;
    q->r = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));
    enQueue(q, 99);
    enQueue(q, 69);
    enQueue(q, 12);
    enQueue(q, 29);
    enQueue(q, 54);
    // if (isFull(q))
    // {
    //     printf("Queue is Full no further element cannot be added\n");
    // }
    // else{
    //     printf("Queue is not full !! You can enQueue an integer\n");
    // }
    
    // printf("Element %d has been removed from the Queue\n", deQueue(q));
    // printf("Element %d has been removed from the Queue\n", deQueue(q));
    // if (isEmpty(q))
    // {
    //     printf("Queue is Empty\n");
    // }
    // else
    // {
    //     printf("Queue is not empty\n");
    // }
    printf(" !! Displaying the element !! \n");
    display(q);
    return 0;
}