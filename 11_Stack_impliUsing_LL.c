#include <stdio.h>
#include <stdlib.h>

// POP mai dikhat hai todhi :-

struct Node
{
    int data;
    struct Node *next; 
};

void LinkedListDisplay(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int data)
{
    if (isFull(top))
    {
        printf("Stack Overflow !!\n");
    }
    else
    {
        struct Node *insert = (struct Node *)malloc(sizeof(struct Node));
        insert->data = data;
        insert->next = top;
        top = insert;
        return top;
    }
}

struct Node *pop(struct Node *top)
{
    if (isEmpty(top))
    {
        printf("Stack Underflow !!\n");
    }
    else
    {
        struct Node *q = top;
        top = top->next;
        free(q);
        return top;
    }
}

int main()
{
    struct Node *top = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    top->data = 2;
    top->next = second;

    second->data = 3;
    second->next = third;

    third->data = 5;
    third->next = fourth;

    fourth->data = 6;
    fourth->next = NULL;

    printf("!! Simple Traversal !!\n");
    LinkedListDisplay(top);
    printf("  ");
    printf(" !! After pushing !!\n");
    top = push(top, 69);
    top = push(top, 100);
    LinkedListDisplay(top);
    printf("  ");
    printf(" !! After popping !!\n");
    top = pop(top);
    top = pop(top);
    LinkedListDisplay(top);
    return 0;
}