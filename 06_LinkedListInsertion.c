#include<stdio.h>
#include<stdlib.h>

//Insertion at the Beginning , in the Middle , at the End and after Node

struct Node{
    int data;
    struct Node *next;
};

void LinkedListDisplay(struct Node *ptr){
    while (ptr!=NULL)
    {
        printf("Elements are:%d\n",ptr->data);
        ptr=ptr->next;  
    }
}

struct Node*insertAtBeg(struct Node*head,int data){
    struct Node*Beginning;
    Beginning=(struct Node*)malloc(sizeof(struct Node));
    Beginning->next=head;
    Beginning->data=data;
    return Beginning;
}

struct Node*insertAtMid(struct Node*head,int data,int index){
    struct Node*Mid=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    Mid->data=data;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    Mid->next=p->next;
    p->next=Mid;
    return head;
}

struct Node*insertAtend(struct Node*head,int data){
    struct Node*end=(struct Node*)malloc(sizeof(struct Node));
    struct Node*p=head;
    end->data=data;
    while (p->next!=NULL)
    {
       p=p->next;
    }
    p->next=end;
    end->next=NULL;
    return head;
}

struct Node*insertAfterNode(struct Node*head,struct Node*previousNode,int data){
    struct Node*After=(struct Node*)malloc(sizeof(struct Node));
    After->data=data;
    After->next=previousNode->next;
    previousNode->next=After;
    
    return head;
}

int main(){
struct Node* head;
struct Node* second;
struct Node* third;
struct Node* fourth;

head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));    
third=(struct Node*)malloc(sizeof(struct Node));
fourth=(struct Node*)malloc(sizeof(struct Node));

//printf("Enter the first element of linked list\n");
//scanf("%d",head);
head->data=45;
head->next=second;


//printf("Enter the second element of linked list\n");
//scanf("%d",second);
second->data=34;
second->next=third;

//printf("Enter the third element of linked list\n");
//scanf("%d",third);
third->data=3;
third->next=fourth;

fourth->data=1;
fourth->next=NULL;

LinkedListDisplay(head);
head=insertAtBeg(head,69);
printf("Display after Insetion at the Beginning\n");
LinkedListDisplay(head);

// head=insertAtMid(head,69,1);
// printf("Insertion at the Middle\n");
// LinkedListDisplay(head);

//head=insertAtend(head,69);
//printf("Insertion at the END\n");
//LinkedListDisplay(head);

// head=insertAfterNode(head,third,999);
// printf("Insertion after a Node\n");
// LinkedListDisplay(head);

return 0;
}