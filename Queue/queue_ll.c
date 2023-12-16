#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *front, *rear;
void enqueue();
void dequeue();
void display();

int main(){
    int ch;
    while(1){
        printf("1. Insert an element in an linear queue:\n");
        printf("2. Delete an element from an linear queue:\n");
        printf("3. Display an element from an linear queue:\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch){
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
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
        }
    }
}
void enqueue(){
    struct node *temp;    //
    temp = (struct node *)malloc(sizeof(struct node));
    if(temp==NULL){
        printf("Queue Overflow");
        return;
    }
    else{
        int num;
        printf("Enter the element to be inserted: ");
        scanf("%d", &num);
        temp->data = num;
        temp->next = NULL;

        if(front == NULL)/*Queue is empty*/{
            front = temp;
            rear = temp;
    }
    else{
        rear->next = temp;
        rear = temp;
    }
    printf("\n %d successfully inserted into the linear queue",temp -> data);

 }
}
void dequeue(){
    struct node *temp;
    if(front == NULL){
        printf("Queue Underflow");
        return;
    }
    else{
        temp = front;
        front = front->next;
        free(temp);
        printf("\n %d successfully deleted from the linear queue",temp -> data);
    }
}
void diplay(){
    struct node *temp;
    if(front == NULL){
        printf("Queue is empty");
        return;
    }
    else{
        temp = front;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }
}