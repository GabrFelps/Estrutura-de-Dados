#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data, Node* next) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = next;
    return newNode;
}

Node* linearSearch(Node* head, int target) {
    while (head && head->data != target) head = head->next;
    return head;
}

int main() {
    Node* head = createNode(10, createNode(23, createNode(45, createNode(70, NULL))));
    int target = 45;

    Node* result = linearSearch(head, target);
    printf(result ? "Elemento %d encontrado.\n" : "Elemento %d não encontrado.\n", target);

    return 0;
}