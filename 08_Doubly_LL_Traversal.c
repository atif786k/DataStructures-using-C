#include <stdio.h>
#include <stdlib.h>

// Doubly Linked List Display:-
// saala reverse order mai nhi ho rha print
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *display(struct Node *ptr)
{
    struct Node*previous=ptr;
    printf("Forward\n");
    while (ptr!=NULL)
    {
        printf("Element: %d\n", ptr->data);
        previous=ptr;
        ptr = ptr->next;
    }
    printf("\nreverse\n");
    while (previous!=NULL)
    {
        printf("Element: %d\n", previous->data);
        previous=previous->prev;
    } 
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->prev = NULL;
    head->data = 3;
    head->next = second;

    second->prev = head;
    second->data = 5;
    second->next = third;

    third->prev = second;
    third->data = 6;
    third->next = fourth;

    fourth->prev = third;
    fourth->data = 8;
    fourth->next = NULL;

    display(head);
    return 0;
}