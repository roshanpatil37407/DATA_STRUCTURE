#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = head;
    return newNode;
}
void insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = createNode(data);
    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

struct Node* deleteNode(struct Node* head, int data) {
    struct Node* prev = NULL;
    struct Node* curr = head;
    while (curr != NULL && curr->data != data) {
        prev = curr;
        curr = curr->next;
    }

    if (curr == NULL) {
        printf("Node with data %d not found\n", data);
        return head;
    }

    if (prev == NULL) {
        head = head->next;
    } else {
        prev->next = curr->next;
    }

    free(curr);
    return head;
}

void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    head = insertAtBeginning(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    printf("Linked list: ");
    display(head);

    head = deleteNode(head, 20);

    printf("Linked list after deletion: ");
    display(head);

    return 0;
}

