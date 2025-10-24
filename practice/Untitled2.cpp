#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};
// LinkedList class with head and tail
class LinkedList {
	
private:
    Node* head;
    Node* tail;

public:
    LinkedList() {
        head = NULL;
        tail = NULL;
    }

    // Insert node at beginning
    void insertAtBeginning(int val){
    	Node* newNode = new Node(val);
    	if(head==NULL){
    		head = tail = newNode;
    		return;
		}
		Node* temp = head;
		newNode->next = head;
		head = newNode;
	}
	
    // Insert node at end (O(1))
    
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    
    // Insert a new node after a given node value
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

        // If inserted at the end, update tail
        if (temp == tail) {
            tail = newNode;
        }
    }


	void deleteFirst(){
		if(head==NULL){
			cout << "empty  list";
			return;
		}
		if(head->next=tail){
			delete head;
			head=tail=NULL;
		}
	}
	
    // Delete first node
   /* void deleteFirst() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;

        if (head == NULL) { // if list becomes empty
            tail = NULL;
        }
    }
*/
    // Delete last node
    void deleteLast() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }

        if (head->next == NULL) { // only one node
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
        cout << "Last node deleted.\n";
    }

    // Delete node by value
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
        // Update tail if last node deleted
        if (current == tail)
            tail = prev;

        delete current;
    }

    // Display the linked list
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

    // Destructor
    ~LinkedList() {
        Node* current = head;
        while (current != NULL) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
};

// Menu function
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

// Main function
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
