#include <iostream>
#include <conio.h>
#include <conio.h>
using namespace std;

// Node class
class Node{
	public:
		int data;
		Node* next;
		
		Node(int val){
			data = val;
		}
};

// Stack class
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }
    
	void push(int val){
		Node* newNode = new Node(val);
		newNode->next = top;
		top = newNode;
	}

	void pop(){
		if(top == NULL){
			cout << "underflow!";
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
};

// Menu function
int menu() {
    int ch;
    cout << "\n\n====== STACK MENU ======\n";
    cout << "1. Push " <<endl;
	cout << "\n2. Pop " <<endl;
	cout << "\n3. Peek " <<endl;
	cout << "\n0. Exit " <<endl;
	cout << "\n\nEnter your choice: ";
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

