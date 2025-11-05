#include <iostream>
#include <conio.h>
using namespace std;

class Stack {
private:
    // ? Private Node class (Data hiding + Encapsulation)
    class Node {
    public:
        int data;
        Node* next;
        Node(int val) {
            data = val;
            next = NULL;
        }
    };

    Node* top; // stack top pointer

public:
    Stack() {
        top = NULL;
    }

    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top == NULL) {
            cout << "Underflow!";
            getch();
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    void peek() {
        if (top == NULL) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Top element: " << top->data << endl;
    }

    void display() {
        if (top == NULL) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "\nStack Elements:\n\n";
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

    bool isEmpty() {
        return top == NULL;
    }

    ~Stack() {
        Node* current = top;
        while (current != NULL) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
};

// Menu function
int menu() {
    int ch;
    cout << "\n\n====== STACK MENU ======\n";
    cout << "1. Push \n2. Pop \n3. Peek \n0. Exit \n";
    cout << "Enter your choice: ";
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
            cout << "Enter value to push: ";
            cin >> val;
            s.push(val);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.peek();
            break;
        case 0:
            exit(0);
        default:
            cout << "Invalid choice!\n";
        }
    }
    return 0;
}
