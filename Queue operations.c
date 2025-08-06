#include <stdio.h>
#include <stdlib.h>

#define MAX 5 

int queue[MAX];
int front = -1, rear = -1;

void enqueue() {
    int value;
    if (rear == MAX - 1) {
        printf("\n Queue Overflow! Cannot insert more elements.\n");
    } else {
        if (front == -1)
            front = 0;
        printf("Enter value to insert: ");
        scanf("%d", &value);
        rear++;
        queue[rear] = value;
        printf(" %d inserted into queue.\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("\n Queue Underflow! Queue is empty.\n");
    } else {
        printf(" %d deleted from queue.\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("\nQueue is empty.\n");
    } else {
        printf("Current Queue: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n---- Queue Operations Menu ----\n");
        printf("1. Insert (Enqueue)\n");
        printf("2. Delete (Dequeue)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
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
                printf(" Exiting the program.\n");
                exit(0);

            default:
                printf(" Invalid choice! Please enter 1-4.\n");
        }
    }

    return 0;
}
