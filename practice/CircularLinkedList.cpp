#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};

class CircularLinkedList {
private:
    Node* tail;

public:
    CircularLinkedList() {
        tail = NULL;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (tail == NULL) {
            tail = newNode;
            tail->next = tail;
            return;
        }
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }

    void deleteFirst() {
        if (tail == NULL) {
            cout << "List is empty.\n";
            return;
        }
        Node* head = tail->next;
        if (head == tail) {
            delete tail;
            tail = NULL;
            return;
        }
        tail->next = head->next;
        delete head;
    }

    void deleteLast() {
        if (tail == NULL) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = tail->next;
        if (temp == tail) {
            delete tail;
            tail = NULL;
            return;
        }
        while (temp->next != tail)
            temp = temp->next;
        temp->next = tail->next;
        delete tail;
        tail = temp;
    }

    void display() {
        if (tail == NULL) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = tail->next;
        cout << "\nCircular Linked List:\n\n";
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != tail->next);
        cout << "(back to head)\n";
    }
};

int menu() {
    int ch;
    cout << "\n\n====== CIRCULAR LINKED LIST MENU ======\n";
    cout << "1. Insert at End " <<endl;
	cout << "\n2. Delete First " <<endl;
	cout << "\n3. Delete Last " <<endl;
	cout <<"\n0. Exit " <<endl; 
	cout <<"\n\nEnter your choice: ";
    cin >> ch;
    return ch;
}

int main() {
    CircularLinkedList cll;
    int val;
    while (1) {
        system("cls");
        cll.display();
        switch (menu()) {
        case 1:
            cout << "Enter value: ";
            cin >> val;
            cll.insertAtEnd(val);
            break;
        case 2:
            cll.deleteFirst();
            break;
        case 3:
            cll.deleteLast();
            break;
        
        case 0:
            exit(0);
        default:
            cout << "Invalid choice!\n";
        }
    }
    return 0;
}

