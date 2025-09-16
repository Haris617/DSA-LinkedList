#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};


node* head = nullptr;
node* tail = nullptr;

void insertAtEnd(int val)
{
    node* n = new node;
    n->data = val;
    n->next = nullptr;

    if (head == nullptr)
    {
        head = n;
        tail = n;
    }
    else
    {
        tail->next = n;
        tail = n;
    }
}

void insertAtStart(int val)
{
    node* n = new node;
    n->data = val;
    n->next = nullptr;

    if (head == nullptr)
    {
        head = tail = n;
    }
    else
    {
        n->next = head;
        head = n;
    }
}

void insertAtSpecificPosition(int position, int val)
{
    node* n = new node;
    n->data = val;
    n->next = nullptr;

    if (position == 1)
    {
        n->next = head;
        head = n;
        if (tail == nullptr) tail = n;
        return;
    }

    node* previous = head;

    for (int i = 1; i < position - 1; i++)
    {
        if (previous == nullptr)
        {
            cout << "Position Out Of Bound" << endl;
            delete n;
            return;
        }
        previous = previous->next;
    }

    n->next = previous->next;
    previous->next = n;

    if (n->next == nullptr)
    {
        tail = n;
    }
}

void countNodes()
{
    node* temp = head;
    int count = 0;

    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }

    cout << "Total Nodes : " << count << endl;
}

void display()
{
    node* temp = head;

    if (head == nullptr)
    {
        cout << "Link List is Empty" << endl;
        return;
    }

    while (temp != nullptr)
    {
        cout << "Data is : " << temp->data << endl;
        temp = temp->next;
    }
}

void searchValue(int val)
{
    node* temp = head;

    while (temp != nullptr)
    {
        if (val == temp->data)
        {
            cout << "Value Found" << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "Value not Found" << endl;
}

void deleteAtStart()
{
    node* temp = head;

    if (head == nullptr)
    {
        cout << "link List Dont Exist" << endl;
        return;
    }
    else if (head->next == nullptr)
    {
        delete head;
        head = tail = nullptr;
        cout << "Node Successfully Deleted" << endl;
        cout << "Link List is Empty Now " << endl;
        return;
    }
    else
    {
        head = head->next;
        delete temp;
        cout << "Node Successfully Deleted" << endl;
    }
}

void deleteAtEnd()
{
    node* temp = head;

    if (head == nullptr)
    {
        cout << "Link List Doesnt Exist" << endl;
        return;
    }
    else if (head->next == nullptr)
    {
        delete head;
        head = tail = nullptr;
        cout << "Node Sucessfully Deleted" << endl;
        cout << "Link List is Empty Now" << endl;
        return;
    }
    else
    {
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = nullptr;
        cout << "Last Node Successfully Deleted" << endl;
    }
}

void deleteAtEndnHeadOnly()
{
    node* temp = head;

    if (head == nullptr)
    {
        cout << "Link List Doesnt Exist" << endl;
        return;
    }
    else if (head->next == nullptr)
    {
        delete head;
        head = tail = nullptr;
        cout << "Node Sucessfully Deleted" << endl;
        cout << "Link List is Empty Now" << endl;
        return;
    }

    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = nullptr;
    tail = temp;
}

int main()
{
    insertAtStart(10);
    insertAtEnd(30);
    insertAtSpecificPosition(2, 20);

    countNodes();

    display();

    searchValue(30);

    deleteAtStart();
    display();

    deleteAtEnd();
    display();

    deleteAtEndnHeadOnly();
    display();

    return 0;
}
