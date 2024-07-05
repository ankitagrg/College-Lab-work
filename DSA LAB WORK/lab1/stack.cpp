#include <iostream>
#define MAX 1000

class Stack {
    int top;
public:
    int a[MAX];

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
};

bool Stack::push(int x) {
    if (top >= (MAX - 1)) {
        std::cout << "Stack Overflow";
        return false;
    }
    else {
        a[++top] = x;
        return true;
    }
}

int Stack::pop() {
    if (top < 0) {
        std::cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}

int Stack::peek() {
    if (top < 0) {
        std::cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty() {
    return (top < 0);
}

bool Stack::isFull() {
    return (top == (MAX - 1));
}

int main() {
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    std::cout << "Top element is " << s.peek() << std::endl;
    std::cout << "Popped element from stack is " << s.pop() << std::endl;
    return 0;
}