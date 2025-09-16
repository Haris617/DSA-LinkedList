#include <iostream>
using namespace std;

void insertAtStart(int val) {
    node* n = new node;
    n->data = val;
    n->previous = nullptr;
    n->next = nullptr;

    if (head == nullptr) {
        head = tail = n;
    } else {
        n->next = head;
        head->previous = n;
        head = n;
    }
}

void insertAtEnd(int val) {
    node* n = new node;
    n->data = val;
    n->previous = nullptr;
    n->next = nullptr;

    if (head == nullptr) {
        head = tail = n;
    } else {
        tail->next = n;
        n->previous = tail;
        tail = n;
    }
}

void insertAtSpecificPosition(int val, int pos) {
    node* n = new node;
    n->data = val;
    n->previous = nullptr;
    n->next = nullptr;

    if (head == nullptr) {
        head = tail = n;
        return;
    } else if (pos == 1) {
        n->next = head;
        head->previous = n;
        head = n;
        return;
    }

    node* Previous = head;
    for (int i = 1; i < pos - 1 && Previous->next != nullptr; i++) {
        Previous = Previous->next;
    }

    if (Previous == tail) {
        tail->next = n;
        n->previous = tail;
        tail = n;
        return;
    }

    node* Current = Previous->next;
    n->next = Current;
    n->previous = Previous;
    Previous->next = n;
    Current->previous = n;
}
