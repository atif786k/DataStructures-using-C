#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
// // // ye sara Rough work hai:-
// // // Saala Harry ne pata nhi kese karvaya tha
// // // samaj hii nhi aya

// // struct stack{
// //     int size;
// //     int top;
// //     int *arr;
// // };

// // int isEmpty(struct stack *ptr)
// // {
// //     if (ptr->top == -1)
// //     {
// //         return 1;
// //     }
// //     else
// //     {
// //         return 0;
// //     }
// // }

// // int isEmpty(struct stack*ptr){
// //     if (ptr->top==-1)
// //     {
// //         return 1;
// //     }
// //     else{
// //         return 0;
// //     }
// // }

// // struct Node
// // {
// //     int data;
// //     struct Node *next;
// //     struct Node *prev;
// // };

// // // Doubly Linked List ka code hai ye ROUGH:-

// // void LinkedListDisplay(struct Node *head)
// // {
// //     struct Node *ptr = head;
// //     struct Node *previous = ptr;
// //     while (ptr != NULL)
// //     {
// //         printf("Element : %d\n", ptr->data);
// //         previous = ptr;
// //         ptr = ptr->next;
// //     }
// //     printf("IN REVERSE ORDER\n");

// //     while (previous != NULL)
// //     {
// //         printf("Element in reverse order : %d\n", previous->data);
// //         previous = previous->prev;
// //     }
// // }

// // Insertion at index:-
// // /*struct Node *insertAtMid(struct Node *head, int index, int data)
// // {
// //     struct Node *Mid = (struct Node *)malloc(sizeof(struct Node));
// //     Mid->data = data;
// //     struct Node *p = head;
// //     int i = 0;
// //     while (i != index - 1)
// //     {
// //         p = p->next;
// //         i++;
// //     }
// //     Mid->next = p->next;
// //     p->next = Mid;
// //     return head;
// // }*/

// // // Insertion in Circular Linked List at the Beginning:-

// // /*struct Node*insertAtFirst(struct Node*head,int data){
// //     struct Node*newElement=(struct Node*)malloc(sizeof(struct Node));
// //     newElement->data=data;
// //     struct Node*p=head->next;
// //     while (p->next!=head)
// //     {
// //         p=p->next;
// //     }
// //     p->next=newElement;
// //     newElement->next=head;
// //     return newElement;
// // }*/

// // // ye deletion at the end ka CODE hai:-

// // /*struct Node*AtEnd(struct Node*head){
// //     struct Node*p=head;
// //     struct Node*q=head;
// //     while (p->next!=NULL)
// //     {
// //         p=p->next;
// //     }
// //    while (q->next!=p)
// //    {
// //        q=q->next;
// //    }

// //     q->next=NULL;
// //     free(p);
// //     return head;
// // }

// // // ye deletion at the index ka CODE hai:-

// // struct Node*AtIndex(struct Node*head,int index){
// //     struct Node*p=head;
// //     struct Node*q=head;
// //     for (int i = 0; i < index-1; i++)
// //     {
// //         p=p->next;
// //     }
// //     for (int i = 0; i < index; i++)
// //     {
// //         q=q->next;
// //     }
// //     p->next=q->next;
// //     free(q);
// //     return head;
// // }*/

// // int main()
// // {
// //     struct Node *head;
// //     struct Node *second;
// //     struct Node *third;
// //     struct Node *fourth;
// //     struct Node *fifth;

// //     head = (struct Node *)malloc(sizeof(struct Node));
// //     second = (struct Node *)malloc(sizeof(struct Node));
// //     third = (struct Node *)malloc(sizeof(struct Node));
// //     fourth = (struct Node *)malloc(sizeof(struct Node));
// //     fifth = (struct Node *)malloc(sizeof(struct Node));

// //     head->prev = NULL;
// //     head->data = 2;
// //     head->next = second;

// //     second->prev = head;
// //     second->data = 3;
// //     second->next = third;

// //     third->prev = second;
// //     third->data = 5;
// //     third->next = fourth;

// //     fourth->prev = third;
// //     fourth->data = 6;
// //     fourth->next = fifth;

// //     fifth->prev = fourth;
// //     fifth->data = 8;
// //     fifth->next = NULL;

// //     /*LinkedListDisplay(head);
// //     head=insertAtFirst(head,7);
// //     printf("Insertion in Circular Linked list\n");
// //     LinkedListDisplay(head);

// //     LinkedListDisplay(head);
// //     //head=AtEnd(head);
// //     //printf("After Deletion\n");
// //     //LinkedListDisplay(head);

// //      head=AtIndex(head,2);
// //      printf("After Deletion\n");
// //      LinkedListDisplay(head);*/
// //     /*LinkedListDisplay(head);
// //     head = insertAtMid(head, 2, 99);
// //     printf("Display after insertion at Mid\n");*/
// //     LinkedListDisplay(head);

// // struct Node
// // {
// //     int data;
// //     struct Node *next;
// // };

// // void llTraversal(struct Node *ptr)
// // {
// //     while (ptr != NULL)
// //     {
// //         printf("Element is : %d\n", ptr->data);
// //         ptr = ptr->next;
// //     }
// // }

// // struct Node *atIndex(struct Node *head, int data, int index)
// // {
// //     struct Node *Mid = (struct Node *)malloc(sizeof(struct Node));
// //     Mid->data = data;
// //     struct Node *p = head;
// //      int i=0;
// //     while (i!= index-1)
// //     {
// //         p = p->next;
// //     }
// //     Mid->next = p->next;
// //     p->next = Mid;
// //     return head;
// // }

// int main()
// {
// //     struct Node *head = (struct Node *)malloc(sizeof(struct Node));
// //     struct Node *second = (struct Node *)malloc(sizeof(struct Node));
// //     struct Node *third = (struct Node *)malloc(sizeof(struct Node));
// //     struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

// //     head->data = 2;
// //     head->next = second;

// //     second->data = 3;
// //     second->next = third;

// //     third->data = 5;
// //     third->next = fourth;

// //     fourth->data = 6;
// //     fourth->next = NULL;

// //     printf(" !! Traversal of the Linked List !! \n");
// //     llTraversal(head);
// //     head=atIndex(head,99,1);
// //     printf(" !! Traversal after inserton at index !! \n");
// //     llTraversal(head);

//     // struct stack *s;
//     // s->size = 80;
//     // s->top = -1;
//     // s->arr = (int *)malloc(s->size * sizeof(int));
//     //   if(isEmpty(s)){
//     //     printf("The stack is empty");
//     // }
//     // else{
//     //     printf("The stack is not empty");
//     // }
//     // struct stack *s=(struct stack*)malloc(sizeof(struct stack));
//     // s->size=90;
//     // s->top=-1;
//     // s->arr=(int *)malloc(s->size * sizeof(int));

//     // if (isEmpty(s))
//     // {
//     //     printf("Stack is Empty\n");
//     // }

//     // else{
//     //     printf("Stack is not Empty\n");

//     // }

//     return 0;
// }

// ARRAY sorted in ascending and descending order
// Interchange > to < to convert from ascending to descending Order
// int main()
// {
//     int score[] = {65, 76, 4, 3, 49, 99, 788, 678, 999};
//     int size = 9;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (score[i] > score[j])
//             {
//                 int a = score[i];
//                 score[i] = score[j];
//                 score[j] = a;
//             }
//         }
//     }
//     printf("Numbers has been arranged in ascneding order\n");
//     for (int e = 0; e < size; e++)
//     {
//         printf("%d ", score[e]);
//     }

//     return 0;
// }

// BST
// struct Node
// {
//     int data;
//     struct Node *left;
//     struct Node *right;
// };

// struct Node *createNode(int data)
// {
//     struct Node *h = (struct Node *)malloc(sizeof(struct Node));
//     h->data = data;
//     h->left = NULL;
//     h->right = NULL;
//     return h;
// }

// void PreOrder(struct Node *root)
// {
//     if (root != NULL)
//     {
//         printf("%d ", root->data);
//         PreOrder(root->left);
//         PreOrder(root->right);
//     }
// }

// void PostOrder(struct Node *root)
// {
//     if (root != NULL)
//     {
//         PostOrder(root->left);
//         PostOrder(root->right);
//         printf("%d ", root->data);
//     }
// }

// void InOrder(struct Node *root)
// {
//     if (root != NULL)
//     {
//         InOrder(root->left);
//         printf("%d ", root->data);
//         InOrder(root->right);
//     }
// }

// int isBST(struct Node *root)
// {
//     static struct Node *prev = NULL;
//     if (root != NULL)
//     {
//         if (!isBST(root->left))
//         {
//             return 0;
//         }
//         if (prev != NULL && root->data <= prev->data)
//         {
//             return 0;
//         }
//         prev = root;
//         return isBST(root->right);
//     }
//     else
//     {
//         return 1;
//     }
// }

// struct Node *searchNode(struct Node *root, int key)
// {
//     if (root == NULL)
//     {
//         return NULL;
//     }
//     if (root->data == key)
//     {
//         return root;
//     }
//     else if (root->data > key)
//     {
//         return searchNode(root->left, key);
//     }
//     else
//     {
//         return searchNode(root->right, key);
//     }
// }

// int main()
// {
//     struct Node *p = createNode(9);
//     struct Node *p1 = createNode(4);
//     struct Node *p2 = createNode(11);
//     struct Node *p3 = createNode(2);
//     struct Node *p4 = createNode(7);
//     struct Node *p5 = createNode(10);
//     struct Node *p6 = createNode(15);

//     p->left = p1;
//     p->right = p2;

//     p1->left = p3;
//     p1->right = p4;

//     p2->left = p5;
//     p2->right = p6;

//     printf("PreOrder Traversal\n");
//     PreOrder(p);
//     printf("\n");

//     printf("PostOrder Traversal\n");
//     PostOrder(p);
//     printf("\n");

//     printf("InOrder Traversal\n");
//     InOrder(p);
//     printf("\n");

//     if (isBST(p))
//     {
//         printf("YES Tree is a Binary Search Tree\n");
//     }
//     else
//     {
//         printf("Tree is not a Binary Search Tree\n");
//     }

//     struct Node *n = searchNode(p,77);
//     if (n != NULL)
//     {
//         printf("Element Found : %d\n", n->data);
//     }
//     else
//     {
//         printf("Element not Found in the Tree\n");
//     }

//     return 0;
// }  


#include<stdio.h>
int main(){
    int a=12;
    int b=12;
    printf("%d", a=b);
    printf("%d", a==b);
    return 0;
}