#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push() {
    int item;
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    printf("Enter the element to add in stack: ");
    scanf("%d", &item);
    top++;
    stack[top] = item;
    printf("Element added to stack\n");
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("Deleted element from stack: %d\n", stack[top]);
    top--;
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements:\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() {
    int choice;

    do {
        printf("\n------- Stack Menu ---------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: printf("Exit of the program\n"); break;
            default: printf("Invalid Choice\n");
        }
    } while (choice != 4);

    return 0;
}