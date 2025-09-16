void deleteAtStart() //Deleting Node At Start
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
	}

	else
	{
		head = head->next;
		delete temp;
	}
}

void deleteAtEnd() // Deleting Node at The End
{
	node* temp = head;

	if (head == nullptr)
	{
		cout << "Link List Doesnt Exist" << endl;
		return;
	}

	else if (head->next == nullptr)
	{
		delete temp;
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

	}
}

void deleteAtEndnHeadOnly() // Deleting Last Node Without Tail Pointer
{
	node* temp = head;

	if (head == nullptr)
	{
		cout << "Link List Doesnt Exist" << endl;
		return;
	}

	else if (head->next == nullptr)
	{
		delete temp;
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
}

