#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
    node* previous;
};

node* head = nullptr;
node* tail = nullptr;

void insertAtStart(int val)
{
    node* n = new node;
    n->data = val;
    n->previous = nullptr;
    n->next = nullptr;

    if (head == nullptr) {
        head = tail = n;
    }

    else {
        n->next = head;
        head->previous = n;
        head = n;
    }
}

void insertAtEnd(int val)
{
    node* n = new node;
    n->data = val;
    n->previous = nullptr;
    n->next = nullptr;

    if (head == nullptr) {
        head = tail = n;
    }

    else {
        tail->next = n;
        n->previous = tail;
        tail = n;
    }
}

void displayForward()
{
    node* temp = head;

    if (head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    cout << "Displaying Forward" << endl;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void displayBackward()
{
    node* temp = tail;

    if (tail == nullptr) {
        cout << "List is empty" << endl;
        return;
    }

    cout << "Displaying Backward" << endl;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->previous;
    }
    cout << endl;
}

void insertAtSpecificPosition(int val, int pos)
{
    node* n = new node;
    n->data = val;
    n->previous = nullptr;
    n->next = nullptr;

    if (head == nullptr) {
        head = tail = n;
        return;
    }

    else if (pos == 1) { // insert at head
        n->next = head;
        head->previous = n;
        head = n;
        return;
    }

    node* Previous = head;
    for (int i = 1; i < pos - 1 && Previous->next != nullptr; i++) {
        Previous = Previous->next;
    }

    // inserting at end
    if (Previous == tail) {
        tail->next = n;
        n->previous = tail;
        tail = n;
        return;
    }

    // inserting in middle
    node* Current = Previous->next;
    n->next = Current;
    n->previous = Previous;
    Previous->next = n;
    Current->previous = n;
}

int main()
{
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(50);

    insertAtSpecificPosition(40, 4); 

    displayForward();
    displayBackward();

    return 0;
}
