#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void splitList(Node* source, Node** front, Node** back) {
    Node *slow = source, *fast = source->next;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    *front = source;
    *back = slow->next;
    slow->next = NULL;
}

Node* mergeLists(Node* a, Node* b) {
    if (!a) return b;
    if (!b) return a;

    if (a->data <= b->data) {
        a->next = mergeLists(a->next, b);
        return a;
    } else {
        b->next = mergeLists(a, b->next);
        return b;
    }
}

void mergeSort(Node** headRef) {
    Node* head = *headRef;
    if (!head || !head->next) return;

    Node *front, *back;
    splitList(head, &front, &back);

    mergeSort(&front);
    mergeSort(&back);

    *headRef = mergeLists(front, back);
}

void printList(Node* head) {
    while (head) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;
    int values[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(values) / sizeof(values[0]);

    for (int i = size - 1; i >= 0; i--) {
        Node* newNode = createNode(values[i]);
        newNode->next = head;
        head = newNode;
    }

    printf("Lista original:\n");
    printList(head);

    mergeSort(&head);

    printf("Lista ordenada:\n");
    printList(head);

    return 0;
}