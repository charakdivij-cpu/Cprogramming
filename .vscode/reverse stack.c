#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// Function to push element in stack
void push(int x) {
    stack[++top] = x;
}

// Function to pop element from stack
int pop() {
    return stack[top--];
}

// Insert element at the BOTTOM of the stack
void insertBottom(int x) {
    if (top == -1) {       // If stack is empty
        push(x);
        return;
    }
    
    i
