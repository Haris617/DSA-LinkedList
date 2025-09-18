void deleteAtStart()
{
    node* temp = head;

    if (!temp) 
    {
        cout << "List is Empty" << endl;
    }

    else 
    {
        if (head == tail) 
        {
            delete head;
            head = tail = nullptr;
        }
        
        else 
        {
            head = head->next;
            head->previous = nullptr;
            delete temp;
        }
    }
}

void deleteAtEnd()
{
    node* temp = tail;

    if (!temp)
    {
        cout << "List is Empty" << endl;
        return;
    }

    if (head == tail) 
    {
        delete head;
        head = tail = nullptr;
    }

    else 
    {
        tail = tail->previous;
        tail->next = nullptr;
        delete temp;
    }
}

void deleteAtSpecificPosition(int pos)
{
    node* current = head;

    if (pos == 1) 
    {
        deleteAtStart();
    }

    else 
    {
        for (int i = 1; i < pos && current != nullptr; i++) {
            current = current->next;
        }

        if (current == nullptr) {
            cout << "Invalid position" << endl;
            return;
        }

        if (current == tail) {
            tail = tail->previous;
            if (tail) tail->next = nullptr;
            else head = nullptr;
            delete current;
            return;
        }

        current->previous->next = current->next;
        current->next->previous = current->previous;

        delete current;
    }
}
