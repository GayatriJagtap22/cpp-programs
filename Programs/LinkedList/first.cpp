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

    ~Node() {         // destructor
        if(next != NULL) {
            delete next;
            next = NULL;
        }
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() {
        head = NULL;
        tail = NULL;
    }

    ~List() {
        if(head != NULL) {
            delete head;
            head = NULL;
        }
    }

    // insert at front
    void push_front(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
        } 
        else {
            newNode->next = head;
            head = newNode;
        }
    }

    // insert at back
    void push_back(int val) {
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = tail = newNode;
        } 
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // remove from front
    void pop_front() {
        if(head == NULL) {
            cout << "LL is empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;

        if(head == NULL) {
            tail = NULL;
        }
    }

    // remove from back
    void pop_back() {
        if(head == NULL) {
            cout << "LL is empty\n";
            return;
        }

        if(head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;

        while(temp->next != tail) {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    // print linked list
    void printList() {
        Node* temp = head;

        while(temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    List ll;

    ll.push_front(5);
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.printList();

    ll.pop_front();
    ll.printList();

    ll.pop_back();
    ll.printList();

    return 0;
}
