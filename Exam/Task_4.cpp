#include<iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        this->data = d;
        this->next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        this->head = nullptr;
    }

    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void deleteAtBeginning() {
        if (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        else {
            cout << "Linked list is already empty" << endl;
        }
    }

    void printList() {
        if (head == nullptr) {
            cout << "Linked list is empty" << endl;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            cout << temp->data << "============>";
            temp = temp->next;
        }
        cout << temp->data;
    }
};

class Stack {
public:
    LinkedList l;

    void push(int data) {
        l.insertAtBeginning(data);
    }

    void pop() {
        l.deleteAtBeginning();
    }

    void printStack() {
        cout << "Stack: ";
        l.printList();
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    s.printStack();

    s.pop();
    cout << "After popping, ";
    s.printStack();

return 0;
}