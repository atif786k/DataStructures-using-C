#include<stdio.h>
#include<malloc.h>

struct Node{
    int data;
    struct Node*left;
    struct Node*right; 
};

struct Node*createNode(int data){
    struct Node*n=(struct Node*)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void preOrder(struct Node*root){
    if (root!=NULL)
    {
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(struct Node*root){
    if (root!=NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}

void InOrder(struct Node*root){
    if (root!=NULL)
    {
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->right);
    }
}

int main(){
    struct Node*p=createNode(5);
    struct Node*p1=createNode(1);
    struct Node*p2=createNode(2);
    struct Node*p3=createNode(6);
    struct Node*p4=createNode(4);
    struct Node*p5=createNode(9);
    struct Node*p6=createNode(3);

    p->left=p1;
    p->right=p2;
    
    p1->left=p3;
    p1->right=p4;
    
    p2->left=p5;
    p2->right=p6;

    // printf("  PreOder Traversal \n");
    // preOrder(p);

    // printf("  PostOrder Traversal \n");
    // postOrder(p);

    printf("  InOrder Traversal \n");
    InOrder(p);
    
    return 0;
}