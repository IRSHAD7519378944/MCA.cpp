#include <iostream>
#include <stdlib.h>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
    Node(int val) { data = val; prev = next = NULL; }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
public:
    DoublyLinkedList() { head = tail = NULL; }

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (!head) head = tail = newNode;
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) head = tail = newNode;
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void deleteFirst() {
        if (!head) { cout << "List empty.\n"; return; }
        Node* temp = head;
        head = head->next;
        if (head) head->prev = NULL;
        else tail = NULL;
        delete temp;
    }

    void deleteLast() {
        if (!tail) { cout << "List empty.\n"; return; }
        Node* temp = tail;
        tail = tail->prev;
        if (tail) tail->next = NULL;
        else head = NULL;
        delete temp;
    }

    void display() {
        if (!head) { cout << "List empty.\n"; return; }
        cout << "\nDoubly Linked List:\n";
        Node* temp = head;
        while (temp) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int menu() {
    int ch;
    cout << "\n\n====== DOUBLY LINKED LIST MENU ======\n";
    cout << "1. Insert at Beginning\n2. Insert at End\n3. Delete First\n4. Delete Last\n0. Exit\nEnter choice: ";
    cin >> ch;
    return ch;
}

int main() {
    DoublyLinkedList dll;
    int val;
    while (1) {
        system("cls");
        dll.display();
        switch (menu()) {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            dll.insertAtBeginning(val);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> val;
            dll.insertAtEnd(val);
            break;
        case 3:
            dll.deleteFirst();
            break;
        case 4:
            dll.deleteLast();
            break;
        case 0:
            exit(0);
        default:
            cout << "Invalid choice!\n";
        }
        system("pause");
    }
}

