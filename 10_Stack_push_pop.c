#include <stdio.h>
#include <stdlib.h>

// Esme PUSH , POP , stackTop and stackBottom:-

struct Stack
{
    int size;
    int top;
    int *arr;
}; 

int isFull(struct Stack *ptr)
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

int isEmpty(struct Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct Stack *ptr, int value)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow !!\n");
        printf("Element %d cannot be inserted\n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
        printf("Element %d is inserted in the stack\n", value);
    }
}

int pop(struct Stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow !!\n");
        printf("Topmost element cannot be deleted\n");
    }
    else
    {
        int value = ptr->arr[ptr->top];
        ptr->top--;
        ptr->top = ptr->top - 1;
        return value;
    }
}

int stackTop(struct Stack *ptr)
{
    return ptr->arr[ptr->top];
}

int stackBottom(struct Stack *ptr)
{
    return ptr->arr[0];
}

int main()
{
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->size = 10;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    printf("%d\n", isEmpty(s));
    push(s, 69);
    push(s, 7);
    push(s, 654);
    push(s, 23);
    push(s, 1);
    push(s, 99);
    printf("After pushing : %d\n", isEmpty(s));
    printf("Element %d has been poped from the Stack\n", pop(s));
    printf("The topmost Element is %d\n", stackTop(s));
    printf("The bottom element is : %d\n", stackBottom(s));

    return 0;
}