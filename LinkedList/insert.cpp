#include <iostream>
using namespace std;

struct node {
	int data;
	node* next;
};

node* head = nullptr;
node* tail = nullptr;

void insertAtEnd(int val) // insert Node At End 
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

void insertAtStart(int val) // insert Node at Start
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

void insertAtSpecificPosition(int position, int val) // Inserting Node at Specific Position
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

int main()
{
  void display()
{
	node* temp = head;

	while (temp != nullptr)
	{
		cout << "Data is : " << temp->data << endl;
		temp = temp->next;
	}
}

  
  return 0;
}
