#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList() : head(nullptr) {}

    void insertStart(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        cout << data << " Inserted" << endl;
    }

    void deleteStart()
    {
        if (head == nullptr)
        {
            cout << "Linked List Empty, nothing to delete" << endl;
            return;
        }

        Node *temp = head;
        head = head->next;

        cout << temp->data << " deleted" << endl;
        delete temp;
    }

    void display()
    {
        cout << "Linked List: ";

        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }

        cout << endl;
    }
};

int main()
{
    LinkedList list;

    list.insertStart(100);
    list.insertStart(80);
    list.insertStart(60);
    list.insertStart(40);
    list.insertStart(20);
    list.display();
    list.deleteStart();
    list.deleteStart();
    list.display();
    return 0;
}