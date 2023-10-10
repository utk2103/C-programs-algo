#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insertEnd(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void deleteEnd() {
    if (head == NULL) {
        return; // Nothing to delete
    }

    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }

    struct Node* current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }
    free(current->next);
    current->next = NULL;
}

void display() {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    int operation, value;

    while (1) {
        scanf("%d", &operation);

        if (operation == -1) {
            scanf("%d", &value);
            if (value >= 0) {
                insertEnd(value);
            } else {
                printf("-ve Node data\n");
                break;
            }
        } else if (operation == -2) {
            deleteEnd();
        } else if (operation == -3) {
            display();
        } else if (operation == -4) {
            break;
        }
    }

    return 0;
}
