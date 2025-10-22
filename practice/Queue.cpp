#include <iostream>
#include <stdlib.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) { data = val; next = NULL; }
};

class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue() { front = rear = NULL; }

    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (rear == NULL) {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
        cout << val << " enqueued.\n";
    }

    void dequeue() {
        if (front == NULL) {
            cout << "Queue Underflow!\n";
            return;
        }
        Node* temp = front;
        cout << temp->data << " dequeued.\n";
        front = front->next;
        if (front == NULL) rear = NULL;
        delete temp;
    }

    void display() {
        if (front == NULL) {
            cout << "Queue is empty.\n";
            return;
        }
        cout << "\nQueue elements:\n";
        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int menu() {
    int ch;
    cout << "\n\n====== QUEUE MENU ======\n";
    cout << "1. Enqueue\n2. Dequeue\n3. Display\n0. Exit\nEnter choice: ";
    cin >> ch;
    return ch;
}

int main() {
    Queue q;
    int val;
    while (1) {
        system("cls");
        q.display();
        switch (menu()) {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            q.enqueue(val);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 0:
            exit(0);
        default:
            cout << "Invalid choice!\n";
        }
       // system("pause");
    }
}

