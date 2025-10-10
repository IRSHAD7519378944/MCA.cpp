// singly linked list
#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// LinkedList class
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    // Insert node at beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Insert node at end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
    }
    
    // Insert a new node after a given node value
void insertAfter(int key, int value) {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;

    // Traverse until we find the key
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Node with value " << key << " not found.\n";
        return;
    }

    // Create a new node
    Node* newNode = new Node(value);
    newNode->next = temp->next;
    temp->next = newNode;
}


// Delete first node
void deleteFirst() {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;
    head = head->next;
    delete temp;
}

// Delete last node
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

    Node* current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    delete current->next;
    current->next = NULL;
    cout << "Last node deleted.\n";
}



    // Delete node by value
    void deleteNode(int value) {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
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
        delete current;
    }

    // Display the linked list
    void display() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        cout << "\nLinked List: " <<endl<<endl;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // Count nodes
    void countNodes() {
        int count = 0;
        Node* temp = head;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        cout << "Total nodes: " << count << endl;
    }

    // Destructor to free memory
    ~LinkedList() {
        Node* current = head;
        while (current != NULL) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
};

int menu(){
	int choice;
	cout << "\n\n\n====== LINKED LIST MENU ======\n";
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

// Main function (menu-driven)
int main() {
    LinkedList list;
    int value;

	while(1){
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

        case 3:
   			int key;
    		cout << "Enter the node value after which to insert: ";
    		cin >> key;
   			cout << "Enter new value to insert: ";
    		cin >> value;
    		list.insertAfter(key, value);
    		break;

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
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    }

    return 0;
}

