# Doubly Linked List in C++

This project implements a **doubly linked list** in C++ with basic operations such as insertion, deletion, and traversal.  
It’s designed to help beginners understand the core concepts of linked lists.

---

## Features

- Insert nodes at the **start**, **end**, or a **specific position**.
- Delete nodes from the **start**, **end**, or a **specific position**.
- Display the list **forward** and **backward**.
- Handles empty list and single-node edge cases safely.

---

## Example Usage

```cpp
#include "main.cpp"

int main() {
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(50);
    insertAtEnd(60);
    insertAtStart(10);

    deleteAtStart();            // Deletes first node (10)
    deleteAtEnd();              // Deletes last node (60)
    deleteAtSpecificPosition(2); // Deletes node at position 2 (30)

    displayForward();           // Output: 20 40 50
    displayBackward();          // Output: 50 40 20
}
