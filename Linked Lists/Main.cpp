#include "singlyLinkedList.h"

int main() {
	singlyLinkedList myList;
	
	node* head = NULL;
	myList.push(&head, 5);
	myList.push(&head, 11);
	myList.push(&head, 19);

	myList.printList(&head);

	cout << "Deleting linked list";

	myList.deleteList(&head);
	head = NULL;
	cout << "\nLinked list deleted";
	
}