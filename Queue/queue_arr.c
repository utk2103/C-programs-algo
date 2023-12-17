#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int queue[MAX]; // Define the queue and its size
int front = -1; // Initialize front and rear
int rear = -1;

void enqueue() {
    int num;
    if (rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    } else {
        if (front == -1) { // If the queue is empty
            front = 0;
        }
        printf("Enter the element to insert: ");
        scanf("%d", &num);
        rear++;      // 
        queue[rear] = num;        //
        printf("%d inserted successfully into the queue\n", num);
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue Underflow\n");    
        return;
    }
    printf("Number deleted from the queue is %d\n", queue[front]);
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = front + 1;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    } else {
        int i;
        printf("Queue is: ");
        for (i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n"); // Added a new line for better formatting
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

