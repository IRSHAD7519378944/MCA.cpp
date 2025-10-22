#include <iostream>
#include <stdlib.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) { data = val; next = NULL; }
};

class Stack {
private:
    Node* top;
public:
    Stack() { top = NULL; }

    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
        cout << val << " pushed to stack.\n";
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow!\n";
            return;
        }
        Node* temp = top;
        cout << temp->data << " popped.\n";
        top = top->next;
        delete temp;
    }

    void peek() {
        if (top == NULL) cout << "Stack is empty.\n";
        else cout << "Top element: " << top->data << endl;
    }

    void display() {
        if (top == NULL) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "\nStack elements:\n";
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int menu() {
    int ch;
    cout << "\n\n====== STACK MENU ======\n";
    cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n0. Exit\nEnter choice: ";
    cin >> ch;
    return ch;
}

int main() {
    Stack s;
    int val;
    while (1) {
        system("cls");
        s.display();
        switch (menu()) {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            s.push(val);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.peek();
            break;
        case 4:
            s.display();
            break;
        case 0:
            exit(0);
        default:
            cout << "Invalid choice!\n";
        }
        system("pause");
    }
}

