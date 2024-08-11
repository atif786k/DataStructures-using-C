#include <stdio.h>
#include <stdlib.h>

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

struct Node *deletionAtBeg(struct Node *head)
{
    struct Node *a = head;
    head = head->next;
    free(a);
    return head;
}

struct Node *deletionAtIndex(struct Node *head, int index)
{
    struct Node*p=head;
    struct Node*q=head;
    for (int i = 0; i < index-1; i++)
    {
        p=p->next;
    }
    for (int i = 0; i < index; i++)
    {
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
// ye mene apne aap kra hai bosdike
// HARRY ka samaj nhi aya
struct Node *deletionAtEnd(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    while (q->next != p)
    {
        q = q->next;
    }

    q->next = NULL;
    free(p);
    return head;
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

    head->data = 2;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 5;
    third->next = fourth;

    fourth->data = 6;
    fourth->next = NULL;

    LinkedListDisplay(head);
    // head=deletionAtBeg(head);
    // printf("Linked List after Deletion\n");
    // LinkedListDisplay(head);

    head = deletionAtIndex(head, 2);
    printf("Deletion in the Middle\n");
    LinkedListDisplay(head);

    // head=deletionAtEnd(head);
    // printf("Deletion at the END\n");
    // LinkedListDisplay(head);

    return 0;
}