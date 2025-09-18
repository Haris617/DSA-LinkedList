# Singly Linked List in C++

This is a **simple C++ implementation of a singly linked list**.  
It supports common operations like insertion, deletion, search, display, and node counting.

---

## Features

- Insert at the **start**, **end**, or a **specific position**.
- Delete at the **start**, **end**, or only **last node without tail pointer**.
- Count total nodes in the list.
- Search for a specific value.
- Display all nodes.

---

## Example Usage

```cpp
#include "your_file.cpp"

int main() {
    insertAtStart(10);
    insertAtEnd(30);
    insertAtSpecificPosition(2, 20);

    countNodes();    // Output: Total Nodes : 3
    display();       // Output: 10, 20, 30

    searchValue(30); // Output: Value Found

    deleteAtStart();
    display();       // Output: 20, 30

    deleteAtEnd();
    display();       // Output: 20

    deleteAtEndnHeadOnly();
    display();       // Output: Link List is Empty
}

