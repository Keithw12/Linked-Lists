#include "singlyLinkedList.h"

void singlyLinkedList::printList(node** head_ref)
{
	if (*head_ref != NULL)
	{
		cout << "Node 1(head): " << (*head_ref)->data << endl;
		node* temp = NULL;
		int nodeCount = 1;
		if ((*head_ref)->next != NULL)
		{
			temp = (*head_ref)->next;

			do
			{
				++nodeCount;
				cout << "Node " << nodeCount << ": " << temp->data << endl;
				temp = temp->next;
			} while (temp != NULL);

		}
	}
	else
	{
		cout << "\nLinked list was not allocated or initialized";
	}
}

void singlyLinkedList::push(node** head_ref, int new_data)
{
	// allocate node
	node* new_node = new node;

	//put in the data
	new_node->data = new_data;

	//link the old list off the new node
	new_node->next = (*head_ref);

	(*head_ref) = new_node;
}

void singlyLinkedList::deleteList(node** head_ref)
{
	//deref head_ref to get the real head
	node* current = *head_ref;
	node* next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}

	//deref head_ref to affect the real head back in the caller.
	*head_ref = NULL;
}
