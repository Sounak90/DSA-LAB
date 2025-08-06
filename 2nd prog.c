#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Maximum size of the stack

int stack[MAX];
int top = -1;

// Function to push an element into the stack
void push() {
    int value;
    if (top == MAX - 1) {
        printf("\n⚠️  Stack Overflow! Cannot push more elements.\n");
    } else {
        printf("Enter value to push: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("✅ %d pushed to stack.\n", value);
    }
}

// Function to pop an element from the stack
void pop() {
    if (top == -1) {
        printf("\n⚠️  Stack Underflow! Stack is empty.\n");
    } else {
        printf("✅ %d popped from stack.\n", stack[top]);
        top--;
    }
}

// Function to display stack elements
void display() {
    if (top == -1) {
        printf("\nStack is empty.\n");
    } else {
        printf("Current Stack: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

// Main menu-driven program
int main() {
    int choice;
    while (1) {
        printf("\n---- Stack Operations Menu ----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("👋 Exiting the program.\n");
                exit(0);

            default:
                printf("❌ Invalid choice! Please enter 1-4.\n");
        }
    }

    return 0;
}