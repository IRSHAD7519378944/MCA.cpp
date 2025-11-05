#include <iostream>
#include <cstdlib>
using namespace std;

class CircularLinkedList {
private:

    // ? Node hidden inside class
    class Node {
    public:
        int data;
        Node* next;

        Node(int val) {
            data = val;
            next = NULL;
        }
    };

    Node* head;
    Node* tail;

public:
    CircularLinkedList() {
        head = tail = NULL;
    }

    // 1. Insert at Beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
            tail->next = head;
            return;
        }
        newNode->next = head;
        head = newNode;
        tail->next = head;
    }

    // 2. Insert at End
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == NULL) {
            head = tail = newNode;
            tail->next = head;
            return;
        }
        tail->next = newNode;
        newNode->next = head;
        tail = newNode;
    }

    // 3. Delete First Node
    void deleteFirst() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        if (head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = head;
        head = head->next;
        tail->next = head;
        delete temp;
    }

    // 4. Delete Last Node
    void deleteLast() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        if (head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }
        Node* temp = head;
        while (temp->next != tail)
            temp = temp->next;

        temp->next = head;
        delete tail;
        tail = temp;
    }

    // 5. Delete Node by Value
    void deleteByValue(int val) {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }

        if (head == tail && head->data == val) {
            delete head;
            head = tail = NULL;
            return;
        }

        if (head->data == val) {
            deleteFirst();
            return;
        }

        Node* prev = head;
        Node* curr = head->next;

        while (curr != head) {
            if (curr->data == val) {
                prev->next = curr->next;
                if (curr == tail)
                    tail = prev;
                delete curr;
                cout << "Node deleted.\n";
                return;
            }
            prev = curr;
            curr = curr->next;
        }
        cout << "Value not found!\n";
    }

    // 6. Display List
    void display() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        cout << "\nCircular Linked List:\n\n";
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "(head)\n";
    }
};

// MENU
int menu() {
    int ch;
    cout << "\n\n====== CIRCULAR LINKED LIST MENU ======\n";
    cout << "1. Insert at Beginning\n";
    cout << "2. Insert at End\n";
    cout << "3. Delete First\n";
    cout << "4. Delete Last\n";
    cout << "5. Delete by Value\n";
    cout << "6. Display\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
    cin >> ch;
    return ch;
}

// MAIN
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
            cll.insertAtBeginning(val);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> val;
            cll.insertAtEnd(val);
            break;
        case 3:
            cll.deleteFirst();
            break;
        case 4:
            cll.deleteLast();
            break;
        case 5:
            cout << "Enter value to delete: ";
            cin >> val;
            cll.deleteByValue(val);
            break;
        case 6:
            cll.display();
            system("pause");
            break;
        case 0:
            exit(0);
        default:
            cout << "Invalid choice!\n";
        }
    }
}

