#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        printf("Stack is Empty\n");
        return 1;
    }
    else
    {
        printf("Stack is not Empty\n");
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 40;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    s->arr[1] = 5;
    s->arr[2] = 14;

    s->top++;

    isEmpty(s);

    return 0;
}