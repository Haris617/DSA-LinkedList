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

	if (head == nullptr)
	{
		cout << "Total Nodes : " << count << endl;
	}

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

	while (temp != nullptr)
	{
		cout << "Data is : " << temp->data << endl;
		temp = temp->next;
	}
}

void searchValue(int val)
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


int main()
{

	insertAtSpecificPosition(1, 20);
	insertAtSpecificPosition(2, 30);
	insertAtSpecificPosition(3, 40);

	searchValue(50);
	searchValue(40);

	countNodes(); 
	display();


	return 0;
}
