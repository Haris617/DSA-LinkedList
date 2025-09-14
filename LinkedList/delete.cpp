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
	}

	else
	{
		head = head->next;
		delete temp;
	}
}
