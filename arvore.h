#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node {
    int data;
    struct node* left;
    struct node* right;
};

Node* createNode(int value) {
    struct node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node* insert(Node *root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

Node* search(Node* root, int value) {
    
    if (root == NULL)
        return NULL;

    if (root->data == value)
        return root;

    if (value < root->data) {
        return search(root->left, value);
    } 
    else{
        return search(root->right, value);
    }
}

void inorderTraversal(Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}
