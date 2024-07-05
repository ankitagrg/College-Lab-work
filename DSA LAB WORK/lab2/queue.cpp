#include <iostream>
#include <queue>
using namespace std;
class Queue
{
private:
    queue<int> q;

public:
    // Function to add an element to the queue //
    void enqueue(int value)
    {
        q.push(value);
        cout << "Element " << value << " added to the queue." << endl;
    }

    // Function to remove an element from the queue //
    void dequeue()
    {
        if (q.empty())
        {
            cout << "Queue is empty. Cannot dequeue." << endl;
        }
        else
        {
            int frontElement = q.front();
            q.pop();
            cout << "Element " << frontElement << " removed from the queue." << endl;
        }
    }

    // Function to get the front element of the queue //
    void front()
    {
        if (q.empty())
        {
            cout << "Queue is empty. No front element." << endl;
        }
        else
        {
            cout << "Front element: " << q.front() << endl;
        }
    }

    // Function to check if the queue is empty //
    void isEmpty()
    {
        if (q.empty())
        {
            cout << "Queue is empty." << endl;
        }
        else
        {
            cout << "Queue is not empty." << endl;
        }
    }

    // Function to get the size of the queue //
    void size()
    {
        cout << "Size of the queue: " << q.size() << endl;
    }
};

int main()
{
    Queue myQueue;

    myQueue.enqueue(1);
    myQueue.enqueue(2);
    myQueue.enqueue(3);

    myQueue.front();
    myQueue.size();
    myQueue.isEmpty();
    myQueue.dequeue();
    myQueue.front();
    myQueue.size();
    myQueue.isEmpty();
    myQueue.dequeue();
    myQueue.dequeue();
    myQueue.front();
    myQueue.size();
    myQueue.isEmpty();
    return 0;
}
