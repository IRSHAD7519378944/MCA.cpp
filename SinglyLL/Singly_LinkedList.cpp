#include <iostream>
using namespace std;

class LinkedList {
private:

    // ? Private Node class (hidden from outside)
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
    LinkedList() {
        head = NULL;
        tail = NULL;
    }

    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void insertAfter(int key, int value) {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;
        while (temp != NULL && temp->data != key) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Node with value " << key << " not found.\n";
            return;
        }

        Node* newNode = new Node(value);
        newNode->next = temp->next;
        temp->next = newNode;

        if (temp == tail)
            tail = newNode;
    }

    void deleteFirst() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;

        if (head == NULL)
            tail = NULL;
    }

    void deleteLast() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }

        if (head->next == NULL) {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* current = head;
        while (current->next != tail) {
            current = current->next;
        }

        delete tail;
        tail = current;
        tail->next = NULL;
    }

    void deleteNode(int value) {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }

        if (head->data == value) {
            deleteFirst();
            return;
        }

        Node* current = head;
        Node* prev = NULL;

        while (current != NULL && current->data != value) {
            prev = current;
            current = current->next;
        }

        if (current == NULL) {
            cout << "Value not found.\n";
            return;
        }

        prev->next = current->next;
        if (current == tail)
            tail = prev;

        delete current;
    }

    void display() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;
        cout << "\nLinked List:\n\n";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void countNodes() {
        int count = 0;
        Node* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        cout << "Total nodes: " << count << endl;
    }

    ~LinkedList() {
        Node* current = head;
        while (current != NULL) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
};

int menu() {
    int choice;
    cout << "\n\n====== LINKED LIST MENU ======\n";
    cout << "1. Insert at Beginning\n";
    cout << "2. Insert at End\n";
    cout << "3. Insert after a Node\n";
    cout << "4. Delete First Node\n";
    cout << "5. Delete Last Node\n";
    cout << "6. Delete a Particular Node\n";
    cout << "0. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}

int main() {
    LinkedList list;
    int value;

    while (1) {
        system("cls");
        list.display();
        switch (menu()) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtBeginning(value);
            break;
        case 2:
            cout << "Enter value: ";
            cin >> value;
            list.insertAtEnd(value);
            break;
        case 3: {
            int key;
            cout << "Enter node value after which to insert: ";
            cin >> key;
            cout << "Enter new value: ";
            cin >> value;
            list.insertAfter(key, value);
            break;
        }
        case 4:
            list.deleteFirst();
            break;
        case 5:
            list.deleteLast();
            break;
        case 6:
            cout << "Enter value to delete: ";
            cin >> value;
            list.deleteNode(value);
            break;
        case 0:
            exit(0);
        default:
            cout << "Invalid choice! Try again.\n";
        }
    }
    return 0;
}

