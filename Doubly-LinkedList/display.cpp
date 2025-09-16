//Displaying Forward

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

//Displaying Backward

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
