#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int top = -1;
int stack[MAX];

void push();
void pop();
void traverse();

int main() {
    int ch;
    do {
        printf("\n 1. PUSH ");
        printf("\n 2. POP");
        printf("\n 3. Traverse/Display");
        printf("\n 4. Exit ");
        printf("\n Enter your choice: ");

        scanf("%d", &ch);
        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                traverse();
                break; 
            case 4:
                exit(0);
            default:
                printf("INVALID CHOICE");
                break;
        }
    } while (ch != 4);

    return 0;
}

void push() {
    int m;
    if (top == MAX - 1) {
        printf("Stack Overflow");
        return;
    }
    printf("Input the new element: ");
    scanf("%d", &m);
    top++;
    stack[top] = m;
}

void pop() {
    if (top == -1) {
        printf("Stack is empty or underflow");
        return;
    }
    stack[top] = 0;
    top--;
}

void traverse() {
    int i;
    for (i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}
