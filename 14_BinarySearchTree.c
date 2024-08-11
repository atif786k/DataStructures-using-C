#include <stdio.h>
#include <malloc.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data)
{
    struct Node *h = (struct Node *)malloc(sizeof(struct Node));
    h->data = data;
    h->left = NULL;
    h->right = NULL;
    return h;
}

void PreOrder(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

void PostOrder(struct Node *root)
{
    if (root != NULL)
    {
        PostOrder(root->left);
        PostOrder(root->right); 
        printf("%d ", root->data);
    }
}

void InOrder(struct Node *root)
{
    if (root != NULL)
    {
        InOrder(root->left);
        printf("%d ", root->data);
        InOrder(root->right);
    }
}

// Checking wheather the Tree is BST or NOT
int isBST(struct Node *root)
{
    static struct Node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}

// Searching Element in the Binary Tree
struct Node *searchNode(struct Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == key)
    {
        return root;
    }
    else if (root->data > key)
    {
        return searchNode(root->left, key);
    }
    else
    {
        return searchNode(root->right, key);
    }
}

// Insertion in BST
void insertInTree(struct Node *root, int key)
{
    struct Node *prev = NULL;
    while (root != NULL)
    {
        prev = root;
        if (root->data == key)
        {
            printf("Cannot insert element %d already exists in BST\n", key);
        }
        else if (root->data > key)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    struct Node*newInsert=createNode(key);
    if (key>prev->data)
    {
        prev->right=newInsert;
    }
    else{
        prev->left=newInsert;
    }
    
}

int main()
{
    struct Node *p = createNode(9);
    struct Node *p1 = createNode(4);
    struct Node *p2 = createNode(11);
    struct Node *p3 = createNode(2);
    struct Node *p4 = createNode(7);
    struct Node *p5 = createNode(10);
    struct Node *p6 = createNode(15);

    p->left = p1;
    p->right = p2;

    p1->left = p3;
    p1->right = p4;

    p2->left = p5;
    p2->right = p6;

    // printf("PreOrder Traversal\n");
    // PreOrder(p);
    // printf("\n");

    // printf("PostOrder Traversal\n");
    // PostOrder(p);
    // printf("\n");



    // printf("InOrder Traversal\n");
    // InOrder(p);
    // printf("\n");

    // if (isBST(p))
    // {
    //     printf("YES Tree is a Binary Search Tree\n");
    // }
    // else
    // {
    //     printf("Tree is not a Binary Search Tree\n");
    // }

    // struct Node *n = searchNode(p, 77);
    // if (n != NULL)
    // {
    //     printf("Element Found : %d\n", n->data);
    // }
    // else
    // {
    //     printf("Element not Found in the Tree\n");
    // }
    insertInTree(p,15);

    return 0;
}