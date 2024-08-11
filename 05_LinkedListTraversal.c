#include<stdio.h>
#include<stdlib.h>

//Linked List Creation
struct Node{
int data;
struct Node *next;
};

//This is the Traversal of Linked List
void LinkedListDisplay(struct Node *ptr){
    while (ptr!=NULL)
    {
        printf("Linked List Element are:%d\n",ptr->data);
        ptr=ptr->next;  
    }
}

int main(){
struct Node* head;
struct Node* second;
struct Node* third;

head=(struct Node*)malloc(sizeof(struct Node));
second=(struct Node*)malloc(sizeof(struct Node));    
third=(struct Node*)malloc(sizeof(struct Node));

printf("Enter the first element of linked list\n");
scanf("%d",head);
head->data;
head->next=second;

printf("Enter the second element of linked list\n");
scanf("%d",second);
second->data;
second->next=third;

printf("Enter the third element of linked list\n");
scanf("%d",third);
third->data;
third->next=NULL;

LinkedListDisplay(head);
return 0;
}