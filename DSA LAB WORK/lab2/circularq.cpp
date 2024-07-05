#include <iostream>
#define MAX_SIZE 5

using namespace std;

class CircularQueue {
private:
    int arr[MAX_SIZE];
    int front, rear;

public:
    CircularQueue() : front(-1), rear(-1) {}

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % MAX_SIZE;
        }

        arr[rear] = value;
        cout << "Enqueued: " << value << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return;
        }

        int removedValue = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }

        cout << "Dequeued: " << removedValue << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Queue: ";
        int i = front;
        do {
            cout << arr[i] << " ";
            i = (i + 1) % MAX_SIZE;
        } while (i != (rear + 1) % MAX_SIZE);
        cout << endl;
    }
};

int main() {
    CircularQueue circularQueue;

    circularQueue.enqueue(10);
    circularQueue.enqueue(20);
    circularQueue.enqueue(30);

    circularQueue.display();

    circularQueue.dequeue();
    circularQueue.display();

    return 0;
}
