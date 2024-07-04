#include <iostream>
using namespace std;
const int MAX = 100; // Maximum size of the stack
int stack[MAX];      // Stack array
int top = -1;        // Stack pointer

// Function to push an element onto the stack
void push(int value) {
    if (top >= MAX - 1) {
        cout << "Stack overflow!" << endl;
    } else {
        stack[++top] = value;
    }
}

// Function to pop an element from the stack
int pop() {
    if (top < 0) {
        cout << "Stack underflow!" << endl;
        return -1; // Return an invalid value to indicate underflow
    } else {
        return stack[top--];
    }
}

// Function to print the stack
void printStack() {
    if (top < 0) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Stack: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Pushing elements to the stack
    for (int i = 1; i <= 7; i++) {
        push(i);
    }

    // Print the original stack
    cout << "Original stack: ";
    printStack();

    // Calculate the middle index
    int middle = top / 2;

    // Shift elements to delete the middle element
    for (int i = middle; i < top; i++) {
        stack[i] = stack[i + 1];
    }

    // Decrement the stack pointer
    top--;

    // Print the modified stack
    cout << "Stack after deleting the middle element: ";
    printStack();

    return 0;
}
