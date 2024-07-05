#include <iostream>
using namespace std;

#define MAX_SIZE 5

class CircularQueue
{
private:
    int front, rear;
    int queue[MAX_SIZE];

public:
    CircularQueue()
    {
        front = rear = -1;
    }

    // Function to check if the queue is empty
    bool isEmpty()
    {
        return front == -1 && rear == -1;
    }

    // Function to check if the queue is full
    bool isFull()
    {
        return (rear + 1) % MAX_SIZE == front;
    }

    // Function to enqueue (insert) an element into the circular queue
    void enqueue(int item)
    {
        if (isFull())
        {
            cout << "Queue is full. Cannot enqueue.\n";
            return;
        }

        // If the queue is empty, set front and rear to 0
        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            // Move rear circularly
            rear = (rear + 1) % MAX_SIZE;
        }

        // Insert the item into the queue
        queue[rear] = item;
        cout << "Enqueued: " << item << endl;
    }

    // Function to dequeue (remove) an element from the circular queue
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }

        cout << "Dequeued: " << queue[front] << endl;

        // If there was only one element in the queue, set front and rear to -1
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            // Move front circularly
            front = (front + 1) % MAX_SIZE;
        }
    }

    // Function to display the elements of the circular queue
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Circular Queue elements: ";
        int i = front;
        do
        {
            cout << queue[i] << " ";
            i = (i + 1) % MAX_SIZE;
        } while (i != (rear + 1) % MAX_SIZE);
        cout << endl;
    }
};

int main()
{
    CircularQueue cq;

    cq.enqueue(1);
    cq.enqueue(2);
    cq.enqueue(3);
    cq.display();

    cq.dequeue();
    cq.display();

    cq.enqueue(4);
    cq.enqueue(5);
    cq.enqueue(6); // Queue is full at this point
    cq.display();

    cq.dequeue();
    cq.dequeue();
    cq.display();

    return 0;
}
