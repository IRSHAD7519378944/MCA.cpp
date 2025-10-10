#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
    Node(int val) {
        data = val;
        prev = next = NULL;
    }
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (head != NULL)
            head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }

    void deleteFirst() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        delete temp;
    }

    void deleteLast() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->prev->next = NULL;
        delete temp;
    }

    void display() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        cout << "\nDoubly Linked List:\n\n";
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int menu() {
    int ch;
    cout << "\n\n====== DOUBLY LINKED LIST MENU ======\n";
    cout << "1. Insert at Beginning " <<endl;
	cout << "\n2. Insert at End " <<endl;
	cout << "\n3. Delete First " <<endl;
	cout << "\n4. Delete Last " <<endl;
	cout << "\n0. Exit " <<endl;
	cout << "\n\nEnter your choice: ";
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
    }
    return 0;
}

