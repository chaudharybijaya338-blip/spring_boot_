// Implementation of Array based Stack(Static Implementation)
#include <stdio.h>
#define MAX_SIZE 7

int stack[MAX_SIZE];
int top = -1;

void push(int item);
void pop();
void peek();
void display();

int main() {
    int ch, x;

    while (1) {
        printf("1. Push\n 2. Pop\n 3. Peek\n 4. Display\n 5. Exit\n");
        printf("Enter a choice: ");
        scanf("%d", &ch);

        if (ch == 1) {
            printf("Enter element to push: ");
            scanf("%d", &x);
            push(x);
        }
        else if (ch == 2)
            pop();
        else if (ch == 3)
            peek();
        else if (ch == 4)
            display();
        else if (ch == 5) {
            printf("Exited.\n");
            break;
        }
        else
            printf("Invalid choice!");
    }
    return 0;
}

void push(int item) {
    if (top == MAX_SIZE - 1)
        printf("<--- Stack Overflow --->");
    else {
        stack[++top] = item;
        printf("Pushed element: %d", item);
    }
}

void pop() {
    if (top == -1)
        printf("<--- Stack Underflow --->");
    else {
        printf("Popped element: %d", stack[top]);
        top--;
    }
}

void peek() {
    if (top == -1)
        printf("<--- Stack Underflow --->");
    else
        printf("Peek element: %d", stack[top]);
}

void display() {
    if (top == -1)
        printf("<--- Stack Underflow --->");
    else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}
/*
To check whether stack is underflow or overflow:
//Stack is empty when top = -1 and stack is full when top = MAX_SIZE - 1 
	//Stack Under flow(empty)
	int isEmpty() {
    if (top == -1)
        return 1;
    else
        return 0;
}
    //Stack Over flow(full)
    int isFull() {
    if (top == MAX_SIZE - 1)
        return 1;
    else
        return 0;
}

//Full Program:
	#include <stdio.h>
#define MAX_SIZE 7

int top = -1;

int isEmpty() {
    if (top == -1)
        return 1;
    else
        return 0;
}

int isFull() {
    if (top == MAX_SIZE - 1)
        return 1;
    else
        return 0;
}

int main() {
    if isEmpty()
        printf("Stack is Empty (Underflow)\n");
    else
        printf("Stack is Not Empty\n");

    top = MAX_SIZE - 1;

    if isFull()
        printf("Stack is Full (Overflow)\n");
    else
        printf("Stack is Not Full\n");

    return 0;
}

*/
