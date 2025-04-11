#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int data) {
    if (!root) return createNode(data);
    if (data < root->data) root->left = insert(root->left, data);
    else if (data > root->data) root->right = insert(root->right, data);
    return root;
}

Node* binarySearch(Node* root, int target) {
    if (!root || root->data == target) return root;
    return target < root->data ? binarySearch(root->left, target) : binarySearch(root->right, target);
}

int main() {
    Node* root = NULL;
    int values[] = {50, 30, 20, 40, 70, 60, 80};
    int target = 40;

    for (int i = 0; i < 7; i++) root = insert(root, values[i]);

    Node* result = binarySearch(root, target);
    printf(result ? "Elemento %d encontrado.\n" : "Elemento %d não encontrado.\n", target);

    return 0;
}