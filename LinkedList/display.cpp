void display() // Displaying Link List From Head  to Tail
{
	node* temp = head;

	while (temp != nullptr)
	{
		cout << "Data is : " << temp->data << endl;
		temp = temp->next;
	}
}

void searchValue(int val) // Display Data if it Exists
{
	node* temp = head;

	while (temp!= nullptr)
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

